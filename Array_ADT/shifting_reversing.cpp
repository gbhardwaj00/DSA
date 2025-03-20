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

// Time: O(n) because we have to iterate through all elements
// O(n) because an additional array B of size n (where n = arr->length) is created. This auxiliary array requires extra space proportional to n
void reverseArray1(Array *arr)
{
    Array B = {{}, arr->size, arr->length};
    // Starting from the last element of the original array, we copy the elements in reverse order to the new array
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B.A[j] = arr->A[i];
    }
    // Copying the reversed array back to the original array
    for (int i = 0; i < arr->length; i++)
    {
        arr->A[i] = B.A[i];
    }
}

// Time : O(n) because we have to iterate through all elements
// Space: O(1) because no extra space is used
void reverseArray2(Array *arr)
{
    // Starting from the first element and the last element, we swap the elements until we reach the middle of the array
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

// Time: O(n) because we have to iterate through all elements
// Space: O(1) because no extra space is used, only for the temporary variable
void leftShift(Array *arr)
{
    // Storing the first element in a temporary variable
    int temp = arr->A[0];
    for (int i = 0; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    // Setting the last element to the first element stored in temp, this is left shift with rotation
    // which means the first element is moved to the last position and length of the array remains the same
    // For without rotation, we can just decrease the length of the array by 1 and not execute the below line
    arr->A[arr->length - 1] = temp;
}

int main()
{
    Array A = {{2, 3, 4, 5, 6}, 10, 5};
    cout << "For array A, ";
    displayArray(A);

    reverseArray1(&A);
    cout << "A after reversing, ";
    displayArray(A);

    reverseArray2(&A);
    cout << "A after reversing again with method 2, ";
    displayArray(A);

    return 0;
}