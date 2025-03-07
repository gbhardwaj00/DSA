#include <iostream>
using namespace std;

// factorial of first n natural numbers
// space = O(n)
// time = O(n)
int factorial(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int fact = factorial(10);
    cout << fact << endl;
}