#include <iostream>
using namespace std;

// Breaking main function into modules/functions
// Helps for readability and easier error-correction

int area(int l, int b)
{
    return l * b;
}

int perimeter(int l, int b)
{
    return 2 * (l + b);
}

int main()
{
    int length, breadth = 0;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    int a = area(length, breadth);
    int p = perimeter(length, breadth);
    cout << "Area of the rectangle is: " << a << endl;
    cout << "Perimeter of the rectangle is: " << p << endl;

    return 0;
}