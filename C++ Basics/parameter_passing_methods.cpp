#include <iostream>
using namespace std;

// usually only used when we want to get a single return value from the function
void pass_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// using pointers to store the address of the arguments
// this is used to change the values of the actual arguments
void pass_by_address(int *a, int *b)
{
    int temp = *a;
    // dereferencing the pointers to get and assign the values
    *a = *b;
    *b = temp;
}

// using references to refer to the actual arguments
// this is used to change the values of the actual arguments
void pass_by_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // pass by value
    int x = 10, y = 20;
    cout << "Before swapping with pass by value: " << x << " " << y << endl;
    pass_by_value(x, y);
    cout << "After swapping with pass by value: " << x << " " << y << endl;

    // pass by address
    int a = 10, b = 20;
    cout << "Before swapping with pass by address: " << a << " " << b << endl;
    pass_by_address(&a, &b);
    cout << "After swapping with pass by address: " << a << " " << b << endl;

    // pass by reference
    int c = 10, d = 20;
    cout << "Before swapping with pass by reference: " << c << " " << d << endl;
    pass_by_reference(c, d);
    cout << "After swapping with pass by reference: " << c << " " << d << endl;
    return 0;
}
