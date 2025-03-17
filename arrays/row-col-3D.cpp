#include <iostream>
using namespace std;

int main()
{
    // Pointer arithmatic takes care of multiplying by the sizeof automatically, compiler automatically scales based on the size of the data type

    // Dimensions: l * m * n
    int A[3][4][4];

    // row major, formula created from left to right
    // Addr(A[i][j][k]) = BA + [i * m * n + j * n + k]
    // BA + [i * 4 * 4 + j * 4 + k]

    // col major, formula created from right to left
    //  Addr(A[i][j][k]) = BA + [k * l * m + j * l + i]
    // BA + [k * 3 * 4 + j * 3 + i1]

    // setting values
    A[1][2][3] = 3;

    // testing row major as C++ uses that for default
    // (int *) flattens the 3D array into 1D array of int values
    // * is a dereference operator
    cout << *((int *)A + (1 * 4 * 4 + 2 * 4 + 3)) << endl;
    return 0;
}