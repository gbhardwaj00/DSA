#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void displayArray(struct Array arr)
{
    cout << "Elements are: \n";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

// Time: O(arr1Size + arr2Size)
void combinedArray(Array arr1, Array arr2, Array *arr3)
{
    int i = 0, j = 0, k = 0;
    // We will compare elements from both arrays and add the smaller one to arr3, looping until we reach the end of one of the arrays
    while (i < arr1.length && j < arr2.length)
    {
        // If element in arr1 is smaller or equal to element in arr2, add it to arr3
        // If element in arr2 is smaller, add it to arr3
        if (arr1.A[i] <= arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else
        {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    // This step is to copy the remaining elements from the array that has not reached the end
    // Copy remaining elements of arr1 (if any)
    while (i < arr1.length)
        arr3->A[k++] = arr1.A[i++];

    // Copy remaining elements of arr2 (if any)
    while (j < arr2.length)
        arr3->A[k++] = arr2.A[j++];
}

int main()
{
    Array arr1 = {{2, 4, 5, 6, 10, 12}, 10, 6};
    Array arr2 = {{1, 2, 3, 7, 14, 98}, 10, 6};
    Array arr3 = {{}, arr1.size + arr2.size, arr1.length + arr2.length};

    cout << "arr1 is ";
    displayArray(arr1);

    cout << "arr2 is ";
    displayArray(arr2);

    combinedArray(arr1, arr2, &arr3);

    displayArray(arr3);
    return 0;
}