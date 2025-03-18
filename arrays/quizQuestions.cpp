#include <iostream>
using namespace std;

int main()
{
    cout << "Hints:" << endl;

    cout << "Q2 - a) You do not need to multiply with sizeOf(data type) because C and C++ compilers take care of it" << endl;
    cout << "Q2 - b) In multi dimension arrays, 'Base Address + Integer' will increment rows. For example, x + 3 = address of x[3] which is a pointer to an array of size = no. of columns of the matrix" << endl;
    return 0;
}