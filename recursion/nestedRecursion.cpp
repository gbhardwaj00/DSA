#include <iostream>
using namespace std;

// Time: O(1), for n <= 100, the number of calls grow only up to a certain level(try entering 1, that is the max), and for n > 100, it is O(1) again
// Space : O(1), same reasoning 
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
    r = fun(91);
    cout << r << endl;
    return 0;
}

// NOTE: For any value of n less than or equal to 101, the function will return 91