#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // data variable - gets memory on the stack
    int x = 10;

    // pointer(address) variable - gets memory on the stack
    int *p;
    // assign the address of x to p
    p = &x;

    // prints the value of x
    printf("Value of x: %d\n", x);

    // prints the value of x using pointer dereference operator
    printf("Value of x: %d\n", *p);

    // prints the address of x
    printf("Address of x: %p\n", p);

    // Example to show heap usage
    int *q;
    // malloc allocates size of 5 integers on the heap and returns the address of the first element
    // malloc returns void* which is typecasted to int*
    // C
    q = (int *)malloc(5 * sizeof(int));

    // Same thing but with C++
    int *r;
    r = new int[5];

    // Array example - created on the heap - C language with malloc - dynamic allocation
    int *arr = (int *)malloc(5 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    // 'arr' variable stores the address of the first element
    int *s = arr;
    printf("Address of arr: %p and value of s: %p \n", arr, s);

    // print all elements of the array
    for (int i = 0; i < 5; i++)
    {
        printf("Using indexing, Element %d: %d\n", i, arr[i]);
        // adding i to the address of the first element to get the ith element, this adds i*sizeof(int) to the address
        printf("using dereferencing pointer, Element %d: %d\n", i, *(s + i));
    }

    // delete the memory allocated on the heap - free is used in C and delete is used in C++
    delete[] r;
    free(q);
    free(arr);
}