#include <iostream>
using namespace std;

int main()
{
    // Scalar variable, at run time, variable x gets assigned some memory
    int x = 10;

    // Vector variable
    // Array, gets assigned 5 times the memory of 'int', contiguous
    // Similar data elements grouped under one name
    int a[5];

    // no error
    cout << a[3] << endl;

    // no error
    cout << a[7] << endl;
    return 0;
}