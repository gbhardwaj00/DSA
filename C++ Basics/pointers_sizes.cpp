#include <iostream>
#include <stdlib.h>
using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Person *p5;

    printf("Size of int pointer: %d bytes\n", sizeof(p1));
    printf("Size of char pointer: %d bytes\n", sizeof(p2));
    printf("Size of float pointer: %d bytes\n", sizeof(p3));
    printf("Size of double pointer: %d bytes\n", sizeof(p4));
    printf("Size of struct pointer: %d bytes\n", sizeof(p5));

    // Size of the pointer is the same irrespective of the type of data it points to

    return 0;
}