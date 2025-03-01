#include <iostream>
using namespace std;

// structs and functions are used in C
// classes are used in C++(Object Oriented Programming)
class Rectangle
{
private:
    // data members are private, they can be accessed through public functions
    int length;
    int breadth;

public:
    // constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void change_length(int new_length)
    {
        length = new_length;
    }

    void calculate_area()
    {
        cout << "Area of the rectangle is " << length * breadth << endl;
    }
};

int main()
{
    // object of class Rectangle
    Rectangle rect(10, 5);

    // we do not need this function anymore because we have a constructor now
    //rect.initialize_rect(10, 20);
    
    // Accessing member functions using dot(.) operator and the object(rect)
    rect.change_length(20);

    rect.calculate_area();

    return 0;
}