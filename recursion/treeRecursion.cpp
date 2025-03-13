#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        // this recursive call finishes first, it makes several calls inside it and then finishes
        // prints 2 1 1
        fun(n - 1);
        // this is the same call as the above and it prints the same output as the above call
        // it takes place after the above call finishes
        // prints 2 1 1
        fun(n - 1);
    }
}

int main()
{
    // prints 3 2 1 1 2 1 1 
    fun(3);
    return 0;
}