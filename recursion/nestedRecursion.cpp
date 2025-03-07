#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    // this is a nested recursion because the function calls itself with the value of the function call itself, using recursieve call value as an argument
    return fun(fun(n + 11));
}

int main()
{
    int r;
    r = fun(95);
    cout << r << endl;
    return 0;
}

// NOTE: For any value of n less than or equal to 101, the function will return 91