#include <iostream>
using namespace std;

// Tail recursion is a special case of recursion where the recursive call is the last thing executed by the function
// All the operations are done in the calling phase
void tail_recursion(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        tail_recursion(n - 1);
        // if we had tail_recursion(n-1) + n, it would not be tail recursion as additon is the last step, not the recursive call
    }
}

int main()
{
    int x = 3;
    tail_recursion(x);
    return 0;
}

// NOTE: This same thing can be done with the help of a loop but the space complexity of the loop is O(1) and the space complexity of the recursion is O(n) because of the stack frames
// So, if the problem can be solved with the help of a loop, it is better to use a loop instead of recursion
// Tail recursion is better than head recursion because it is easier to convert tail recursion to a loop than head recursion, some of the compilers optimize tail recursion to a loop