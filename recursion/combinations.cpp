#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

// Time: O(3n) = O(n)
int combinations(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


// Time: 
int combPascals(int n, int r)
{
    if (r == 0 || (n == r))
    {
        return 1;
    }
    // this formula is obtained from Pascal's triangle
    return combPascals(n - 1, r - 1) + combPascals(n - 1, r);
}

int main()
{
    cout << combinations(5, 2) << endl;

    cout << combPascals(5, 2) << endl;
    return 0;
}