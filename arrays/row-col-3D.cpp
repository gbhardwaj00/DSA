#include <iostream>
using namespace std;

int main()
{
    // sizes: l * m * n
    int A[3][4][4];

    // row major, formula created from left to right
    // Addr(A[i][j][k]) = BA + [i * m * n + j * n + k]
    // BA + [i * 4 * 4 + j * 4 + k] * sizeOfInt

    // col major, formula created from right to left
    //  Addr(A[i][j][k]) = BA + [k * l * m + j * l + i] * sizeOfInt
    // BA + [k * 3 * 4 + j * 3 + i1] * sizeOfInt

    // setting values
    A[1][2][3] = 3;

    // testing row major as C++ uses that for default
    cout << *(A + (1 * 3 * 4 + 2 * 3 + 3) * sizeof(int));
    return 0;
}