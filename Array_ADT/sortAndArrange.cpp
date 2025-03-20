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

bool checkSorted(Array arr)
{
    // We only need to check until the second last element because we are comparing the current element with the next element
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return false;
        }
    }
    return true;
}

// Time: O(n) because we have to iterate through all elements
// Space: O(1) because no extra space is used
void insertElm(int elm, Array *arr)
{
    // If the array is full, we cannot insert a new element
    if (arr->length == arr->size)
    {
        cout << "Array is full, cannot insert a new element\n";
        return;
    }
    // We start from the last element and move each element one position to the right until we reach the index where we want to insert the new element
    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > elm)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = elm;
    arr->length++;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrangeElements(Array *arr)
{
    int i = 0, j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        // This condition is required because i can pass j within this while loop and then perform swap
        // Example [-1 -2 -3 1 2 3]
        // Without this if condition, 'i' will stop at index 3 and 'j' will stop at index 2 and then they will make a swap which will give wrong output
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    Array A = {{2, 3, 4, 5, 6}, 10, 5};
    displayArray(A);

    if (checkSorted(A))
    {
        cout << "Array is sorted\n";
    }
    else
    {
        cout << "Array is not sorted\n";
    }

    insertElm(1, &A);
    displayArray(A);

    Array B = {{-8, 5, 4, -2, 4, 5, 2, -4}, 10, 8};
    cout << "Array B before arranging negatives and positives";
    displayArray(B);
    arrangeElements(&B);

    cout << "Array B after arranging negatives and positives";
    displayArray(B);
    return 0;
}