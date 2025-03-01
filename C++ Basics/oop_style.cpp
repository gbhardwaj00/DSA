#include <iostream>
using namespace std;

// comapred to struct style, we can combine the struct and the functions to a class which combines all the logic
class Rectangle
{ // members are private by default
  // properties
private:
    int length;
    int breadth;

    // member functions
public:
    // default constructor
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }

    Rectangle(int l, int b);

    // facilitaotr functions
    // getter(accessor) and setter(mutator) functions
    int setLength(int l);

    int setBreadth(int b);

    int getLength();

    int getBreadth();

    // destructor
    ~Rectangle();

    int area();

    int perimeter();
};

// scope resolution operator(::) is used to define a function outside the class
// Defining the functions outside the class

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::setLength(int l)
{
    length = l;
}

int Rectangle::setBreadth(int b)
{
    breadth = b;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle destroyed" << endl;
}

int main()
{
    int l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    Rectangle r(l, b);

    int a = r.area();
    int p = r.perimeter();
    cout << "Area of the rectangle is: " << a << endl;
    cout << "Perimeter of the rectangle is: " << p << endl;

    // showing usage of facilitator functions
    r.setLength(10);
    r.setBreadth(20);

    cout << "Length: " << r.getLength() << endl;
    cout << "Breadth: " << r.getBreadth() << endl;

    cout << "New Area: " << r.area() << endl;
    cout << "New Perimeter: " << r.perimeter() << endl;

    // once main function ends, the destructor is called automatically
    return 0;
}