#include <iostream>
using namespace std;

// Time: O(n)
int fibIterative(int n)
{
    int t0 = 0, t1 = 1, s;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// fib(5) has 15 calls, fib(4) has 9 calls, fib(3) has 5 calls
// O(2^n) - each function is making 2 recursive calls, makes a tree structure
// Called excessive recursive function because it calls itself many times for same parameters, ex- f(3) is calcualted multiple times
int fibRecursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibRecursive(n - 2) + fibRecursive(n - 1);
}

// this is an array which is used in memoization technique to remember previously calculated values, so some recursive calls do not need to be calculated
int storedValues[10];
// Time: O(n)
int fibMemoization(int n)
{
    if (n <= 1)
    {
        storedValues[n] = n;
        return n;
    }
    if (storedValues[n - 2] == -1)
    {
        storedValues[n - 2] = fibMemoization(n - 2);
    }
    if (storedValues[n - 1] == -1)
    {
        storedValues[n - 1] = fibMemoization(n - 1);
    }
    return storedValues[n - 2] + storedValues[n - 1];
}

int main()
{
    int n = 10;

    cout << fibIterative(n) << endl;

    cout << fibRecursive(n) << endl;

    for (int i = 0; i < n; i++)
    {
        storedValues[i] = -1;
    }
    cout << fibMemoization(n);

    return 0;
}