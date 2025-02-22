#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    // reference variable - gets memory on the stack - it is an alias to the variable it is referencing
    // two names for the same memory location, no extra memory is allocated
    int &b = a;

    // prints the value of a
    printf("Value of a: %d\n", a);

    // prints the value of a using reference
    printf("Value of a: %d\n", b);

    b++;
    printf("Value of a after incrementing: %d\n", a);

    int c = 30;
    // this is an assignment and not a reference to c, so a = b = 30 after this line below
    b = c;

    printf("Value of a after assigning c(30) to b: %d\n", a);
    return 0;
}