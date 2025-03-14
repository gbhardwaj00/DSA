#include <iostream>
using namespace std;

int main()
{
    int *p = (int *)malloc(5 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // array sizes cannot be grown but this indirect way listed can be followed
    // this cannot be done because we do not know if next contiguous memory cells are available or not
    // q is pointing to larger size array
    int *q = new int[10];

    // transfer elements
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    // first delete the unused memory
    delete[] p;

    // p stores address stored by q now
    p = q;

    // the first elements will print the same as the array that p was pointing to earlier
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }

    // q is pointing to null/nothing now
    q = nullptr;

    return 0;
}