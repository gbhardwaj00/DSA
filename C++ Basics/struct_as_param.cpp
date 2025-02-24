#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void calculate_area_pass_by_value(struct Rectangle r1)
{
    // modifying length and breadth here does not change the values of the passed argument
    cout << "Area of rectangle is " << r1.length * r1.breadth << endl;
}

void calculate_area_pass_by_reference(struct Rectangle &r1)
{
    // we can change the member values of the original struct in this function
    r1.length = 15; // this changes the value of the struct passed in the argument in the main function
    cout << "Area of rectangle is " << r1.length * r1.breadth << endl;
}

void calculate_area_pass_by_address(struct Rectangle *r1)
{
    // we can change the member values of the original struct in this function
    r1->length = 20; // this changes the value of the struct passed in the argument in the main function
    // '->' notation to access struct members with a pointer
    cout << "Area of rectangle is " << r1->length * r1->breadth << endl;
}

int main()
{
    struct Rectangle rect = {10, 8};
    // call by value, creates a new object in the function in which values are copied to its' corresponding members
    calculate_area_pass_by_value(rect);

    // passing by reference now
    calculate_area_pass_by_reference(rect);

    // passing by address now
    calculate_area_pass_by_address(&rect);

    /* NOTE: If we pass a struct by value, and it has an array member variable
    then we do not need to pass array size as compiler handles the copying
    of array to the new struct object created in the function.
    This is unlike passing arrays which require size to be passed alongside the array */

    return 0;
}