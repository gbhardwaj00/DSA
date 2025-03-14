#include <iostream>
using namespace std;

int main()
{
    // ============ Static ==============//

    // Size cannot be changed, gets memory in the Stack
    int A[5];

    // Size can be decided during runtime in C++ like this, not in C
    int n;
    cin >> n;
    // this line might show error, but ignore it, it is a wrong warning, will still work
    int B[n];

    //================ Dynamic =================== //

    // Gets memory in Stack for this pointer
    int *p;

    // now the pointer p stores the address of this contiguous memory that is given on the Heap
    p = new int[5];

    // This is the C language way of declaring dynamic array
    int *q = (int *)malloc(5 * sizeof(int));

    // To prevent memory leaks, release this memory at the end
    // C++
    delete[] p;

    // C
    free(p);

    return 0;
}