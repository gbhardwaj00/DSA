#include <iostream>
using namespace std;

// This prints the numbers in decreasing order because the cout statement is before the recursive call
// Which means that the function prints the number first and then makes call to itself with n-1
void tail_recursion(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        tail_recursion(n - 1);
    }
}

// This prints the numbers in increasing order because the cout statement is after the recursive call
// Which means that the function makes call to itself with n-1 first and then prints the number(this will be done after the base case is reached and control comes back to the function instance)
void head_recursion(int n)
{
    if (n > 0)
    {
        head_recursion(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int x = 3;
    tail_recursion(x);
    head_recursion(x);
    return 0;
}
