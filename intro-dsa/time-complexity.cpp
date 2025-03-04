#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    // O(1)
    int temp = a;
    // O(1)
    a = b;
    // O(1)
    b = temp;
    // constant time = O(1) = O(n^0)
}

int sum(int A[], int n)
{
    // O(1)
    int s = 0;

    // O(1) for initialization
    // O(n+1) for the checking the condition, +1 is for the last iteration when condition is false
    // O(n) for incrementing the value of i
    // So overall is O(1) + O(n+1) + O(n) = O(n+1) = O(n)
    // We took O(n + 1) because we are considering the worst case scenario, and it can be written as O(n)
    for (int i = 0; i < n; i++)
    {
        // O(n) as it runs n times, once for each iteration
        s += A[i];
    }

    // O(1)
    return s;

    // Adding all the time complexities, we get O(1) + O(n) + O(1) = O(n)
}

void printHello(int n)
{
    // O(1)
    int i, j;

    // O(n), like the sum function
    for (i = 0; i < n; i++)
    {
        // O(n) *  O(n) = O(n^2), because the inner loop runs n times for each iteration of the outer loop
        for (j = 0; j < n; j++)
        {
            // O(n^2)
            cout << "Hello" << endl;
        }
    }

    // Therefore, the overall time complexity is O(n^2)
}

int main()
{
    int a = 2, b = 3;
    swap(a, b);

    int A[] = {1, 2, 3, 4, 5};
    cout << sum(A, 5) << endl;

    printHello(5);

    return 0;
}

/** NOTE: 
 * fun1() {
 *     fun2();
 * }
 *
 * fun2() {
 *    for (int i = 0; i < n; i++) {
 *       .....
 *    }
 * }
 *
 *
 * HERE, time complexity of fun1() is O(n), not O(1) because fun2() is called inside fun1() and fun2() has time complexity of O(n)
 */