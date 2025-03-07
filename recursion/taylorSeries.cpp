#include <iostream>
using namespace std;

// exponent of a^b
// space = O(n)
// time = O(n)

double taylorSeries(double x, double n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylorSeries(x, n - 1);
        p = p * x;
        f = f * n;
        return r + (p / f);
    }
}

int main()
{
    double ans = taylorSeries(1, 10);
    cout << ans << endl;
}