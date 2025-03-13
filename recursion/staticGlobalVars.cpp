#include <iostream>
using namespace std;

int nonStaticFunction(int n)
{
    if (n > 0)
    {
        // here we are adding n to the return value of the recursive call, n is a local variable and is not shared between function calls
        // the addition of 'n' is done in the returning phase
        return nonStaticFunction(n - 1) + n;
    }
    return 0;
}

int staticFunction(int n)
{
    static int x = 0;
    if (n > 0)
    {
        // here we are adding x to the return value of the recursive call, x is a static variable and is shared between function calls, it is stored in the data segment of the memory
        x++;
        // addition of 'x' is done in the returning phase
        return staticFunction(n - 1) + x;
    }
    return 0;
}

int main()
{
    int a = 5;
    // prints 15
    cout << nonStaticFunction(a) << endl;
    // prints 25 because it is head recursion and x becomes 5 in the most innermost call and gets done first in head recursion
    cout << staticFunction(a) << endl;

    // this prints 50 because the value of 'x' becomes 10 in the most inner call after it is changed by the previous time we called the function above
    cout << staticFunction(a) << endl;

    return 0;
}