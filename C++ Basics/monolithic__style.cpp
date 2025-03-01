#include <iostream>
using namespace std;

// monolithic programs have everything inside main function
int main()
{
    // good practice to initialize variables whenever we declare them
    int length, breadth = 0;
    cout << "Enter length and breadth: ";
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);
    cout << "Area of the rectangle is: " << area << endl;
    cout << "Perimeter of the rectangle is: " << peri << endl;

    return 0;
}