#include <iostream>
using namespace std;

// for first n terms
// e ^ x = 1 + (x / 1!) + (x ^ 2 / 2!) + (x ^ 3 / 3!) + ..... + (x ^ n / n!)
// Time: O(n ^ 2)
// Space : O(n)
double taylorSeries(double x, int n)
{
    static double p = 1;
    static double f = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        double r = taylorSeries(x, n - 1);
        p = p * x; // this makes the numerator equal to x during n = 1 and then multiplies with x each time for the top part
        f = f * n; // this line calculates the right factorial value for the denominator in each step
        return p / f + r;
    }
}

// Time : O(n), this rule reduces the number of multiplications from quadratic to linear
double taylorSeriesHorner(int x, int n)
{
    static double r;
    if (n == 0)
    {
        return r;
    }
    // this is calculated during calling time because it is needed for the next level, check horner's rule
    r = 1 + ((double)x / n) * r;
    return taylorSeriesHorner(x, n - 1);
}

int main()
{
    // increasing the value of the power eventually leads to a wrong answer, because of max variable value constraints
    double ans = taylorSeries(4, 17);
    cout << ans << endl;

    double ans2 = taylorSeriesHorner(4, 17);
    cout << ans2 << endl;
}