#include <iostream>
using namespace std;

// Head recursion is a special case of recursion where the recursive call is the first thing executed by the function
// All the operations are done in the returning phase
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
    head_recursion(x);
    return 0;
}

// NOTE: This can be converted to a loop just like tail recursion but it is harder to convert head recursion to a loop than tail recursion