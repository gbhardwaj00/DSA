#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r; // Pointer to struct, takes 2 bytes

    // accessing struct members using struct r
    printf("Length: %d\n", r.length);

    // accessing struct members using pointer p
    // (*p).length is same as p->length - both methods dereferences the pointer and then accesses the member
    printf("Length: %d\n", (*p).length);
    printf("Length: %d\n", p->length);

    // declaring struct on heap dynamically
    struct Rectangle *q;
    // typecasting malloc returned void pointer to struct pointer
    // this is C method of dynamic allocation
    q = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    // this is C++ method of dynamic allocation
    // struct Rectangle *q;
    // q = new Rectangle;
    q->length = 15;
    q->breadth = 7;
    printf("Length: %d\n", q->length);
    printf("Breadth: %d\n", q->breadth);

    // freeing the allocated memory
    free(q);
    return 0;
}