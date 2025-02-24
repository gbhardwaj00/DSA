#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *initialize_rect()
{
    struct Rectangle *rect = new Rectangle;
    rect->length = 10;
    rect->breadth = 20;
    return rect;
}

void change_length(struct Rectangle *r, int new_length)
{
    r->length = new_length;
}

void calculate_area(struct Rectangle *r)
{
    cout << "Area of the rectangle is " << r->length * r->breadth << endl;
}

int main()
{
    struct Rectangle *rect;
    // returns a Rectangle intialized on the heap
    rect = initialize_rect();
    // pass by address
    change_length(rect, 20);
    // pass by address
    calculate_area(rect);

    // clearning dynamically allocated space
    delete rect;
    return 0;
}