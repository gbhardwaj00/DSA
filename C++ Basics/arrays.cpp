#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
    // the next statement prints the garbage value of the 6th element of the array, does not give an error
    printf("%d\n", arr[6]);
    // the next statement prints a garbage value, also does not give an error
    printf("%d\n", arr[10]);
    return 0;
}