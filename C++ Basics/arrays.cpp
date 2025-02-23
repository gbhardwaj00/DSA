#include <iostream>

using namespace std;

int main()
{
    int arr[7];

    // this is before initializating the array with values, prints garbage values
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // initializing first 5 elements of the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }

    // print all elements of array
    // if 'arr' was dynamically declared, this for loop would not work as we compiler would not know the size of 'arr'
    for (int x : arr)
    {
        cout << x << endl;
    }

    // the next statement prints the garbage value of the 6th element of the array, does not give an error
    printf("%d\n", arr[5]);

    // the next statement prints a garbage value, i > size of array,also does not give an error
    printf("%d\n", arr[10]);

    // assigning a value to 10th elm after array start and check if it prints correct value
    arr[10] = 10;
    printf("%d\n", arr[10]);

    cout << "Address of array is " << arr << endl;

    return 0;
}