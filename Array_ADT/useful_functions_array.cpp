#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void displayArray(Array arr)
{
    cout << "Elements are: \n";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

// Time : O(1) - always same number of operations
int get(int index, Array arr)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    cout << "Index out of bounds!\n";
    return -1;
}

// Time : O(1) - always same number of operations
void set(int index, int value, Array *arr)
{
    // checking if index is within bounds
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = value;
    }
    else
    {
        cout << "Index out of bounds!\n";
    }
}

// Time: O(n) because we have to iterate through all elements
int max(Array arr)
{
    int max = arr.A[0];
    // starting from 1 because we already set max to the first element
    // if the new element is greater than max, we update max value
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

// Time: O(n) because we have to iterate through all elements
int min(Array arr)
{
    int min = arr.A[0];
    // starting from 1 because we already set min to the first element
    // if the new element is less than min, we update min value
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

// Time: O(n) because we have to iterate through all elements
int sum(Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

// Time: O(n) because we have to iterate through all elements
// Space: O(n) because of the recursive calls on the stack
int sumRecursive(Array arr, int n)
{
    if (n < 0)
    {
        return 0;
    }
    return sumRecursive(arr, n - 1) + arr.A[n];
}

// Time: O(n) because we have to iterate through all elements
float average(Array arr)
{
    // casting to float to get a float result, otherwise it will be an integer division and will display incorrect results
    return (float)sum(arr) / arr.length;
}

int main()
{
    // creating an array with 5 elements, setting size to 10, and length to 5
    Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    displayArray(arr);

    cout << "Element at index 2 is: " << get(2, arr) << endl;
    cout << "Element at index 7 is: " << get(7, arr) << endl;

    cout << "Array before setting element at index 2 to a new value: ";
    displayArray(arr);
    // using passing by address because we want to modify the struct we are passing
    set(2, 10, &arr);
    cout << "Array after setting element at index 2 to a new value: ";
    displayArray(arr);

    cout << "Max element in the array is: " << max(arr) << endl;

    cout << "Min element in the array is: " << min(arr) << endl;

    cout << "Sum of all elements in the array is: " << sum(arr) << endl;

    cout << "Sum of all elements in the array using recursion is: " << sumRecursive(arr, arr.length - 1) << endl;

    cout << "Average of all elements in the array is: " << average(arr) << endl;

    return 0;
}