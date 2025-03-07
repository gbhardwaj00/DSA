#include <iostream>
using namespace std;

// sum of first n natural numbers
// space = O(n)
// time = O(n)
int sumNatNumbers(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    return n + sumNatNumbers(n - 1);
}

int main()
{
    int sum = sumNatNumbers(10);
    printf("%d ", sum);
    return 0;
}