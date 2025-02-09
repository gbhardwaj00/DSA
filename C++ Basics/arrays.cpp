#include <iostream>

using namespace std;

int main()
{
    int arr[7];

    // this is before initializating the array, prints garbage values
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // initializing and printing first 5 elements of the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }

    // print
    for (int x : arr)
    {
        cout << x << endl;
    }

    // the next statement prints the garbage value of the 6th element of the array, does not give an error
    printf("%d\n", arr[5]);

    // the next statement prints a garbage value, i > size of array,also does not give an error
    printf("%d\n", arr[10]);

    // assigning a value to 10th elm after array start and checking if it gives an error
    arr[10] = 10;
    printf("%d\n", arr[10]);
    
    return 0;
}