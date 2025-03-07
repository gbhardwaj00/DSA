#include <iostream>
using namespace std;

// exponent of a^b
// space = O(n)
// time = O(n)
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}

// optimized because this uses less number of multiplications
//  2^8 can be written as (2*2)^4 which has less number of multiplications(5)
int optimizedPower(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b % 2 == 0)
    {
        return optimizedPower(a * a, b / 2);
    }
    else
        return a * optimizedPower(a * a, (b - 1) / 2);
}

int main()
{
    int ans = optimizedPower(2, 10);
    cout << ans << endl;
}