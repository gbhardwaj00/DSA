#include <iostream>
using namespace std;

int main()
{
    // First Way
    // a 3 Rows X 4 Columns 2D array structure
    // memory is still contiguous, goes like A[0][0], A[0][1], A[0][2], A[0][3], A[1][0], A[1][1], ......
    // so memory allocated like a 1D array with 12 elements
    // This will be calculated as *(A + (Row * NumOfCols) + Col)
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // Second Way
    //  Array of pointers
    int *B[3];
    // makes a 3 X 4 array declared on heap
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    B[1][2] = 15;

    // Third Way
    // Entire Structure declared on Heap unlike the previous method, even the array of pointers is on the Heap
    // Double pointer, declared on stack
    int **C;
    // array of pointers of type integer
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];

    // traversing a 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // prints garbage but works
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}