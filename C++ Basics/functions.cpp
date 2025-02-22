#include <iostream>
using namespace std;

// declaration of the function, a and b are called parameters
// the function gets its own stack frame when it is called
int add(int a, int b)
//definition of the function
{   
    int sum = a + b;
    return sum;
}

int main()
{   
    int x, y, z;
    x = 2;
    y = 3;
    // here, x and y are called arguments
    int c = add(x, y);
    cout << "Sum is " << c << endl;
    return 0;
}