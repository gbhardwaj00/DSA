#include <iostream>
using namespace std;

// we realzied that the length and breadth in the modular style belonged to the same object, so we defined a struct for it
struct Rectangle
{
    // unlike class, these members are public by default
    int length;
    int breadth;
};

void initialize_rect(Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

// now we only pass the struct, instead of two different variables
int area(Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(Rectangle r)
{
    return 2 * (r.length + r.breadth);
}

int main()
{
    Rectangle r = {0, 0};

    int l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    initialize_rect(&r, l, b);

    int a = area(r);
    int p = perimeter(r);
    cout << "Area of the rectangle is: " << a << endl;
    cout << "Perimeter of the rectangle is: " << p << endl;

    return 0;
}