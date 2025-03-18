#include <iostream>
using namespace std;

int main()
{
    // m * n = 3 * 4
    int B[3][4] = {
        {1, 2, 3, 1},
        {4, 5, 6, 4},
        {7, 8, 9, 10}};

    // if an array is arranged in row-major style: [row1 row2 row3] contiguously
    // BA - Base Address of array(suppose it is 1000), n = no of colummns(4)
    // Address(B[i][j])=BA+(i×n+j)×size of one element
    // Address(B[1][2])=1000+(1×4+2)×4 = =1000+(4+2)×4=1000+24=1024

    // Value can be calculated as below, sizeof not required as compilers does that automatically
    // The (int *) flattens the 3D array into 1D array of int values
    // * is a dereference operator to get the value in the index location
    int b12 = *((int *)B + (1 * 4 + 2));
    cout << b12 << " ";

    // Column major: [col1 col2 col3 col4] contiguously
    // Address(B[i][j])=BA+(j×m+i)×size of one element
    // Address(B[1][2]) = 1000+(2*3+1)*4 = 1028

    // As seen, memory addresses are different for these two orienatations, this is because of how data is arranged in memory
    return 0;
}