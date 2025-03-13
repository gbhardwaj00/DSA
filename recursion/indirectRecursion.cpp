#include <iostream>
using namespace std;

// Indirect recursion is a special case of recursion where the functions call each other in a circular manner
// funA calls funB and funB calls funA
// Eventually, the base case is reached and the recursion stops

// We declare funB here because it is defined after funA
// If not, the compiler will not know about funB when funA is called
void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funA(n / 2);
    }
}

int main()
{
    funA(20);
    return 0;
}

// prints 20 19 18 9 8 4 3
// funA(20) -> funB(19) -> funA(9) -> funB(8) -> funA(4) -> funB(3) -> funA(1) -> funB(0) -> X