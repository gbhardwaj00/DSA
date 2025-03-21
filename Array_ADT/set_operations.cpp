#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array *arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr->length; i++)
        cout << arr->A[i] << " ";
    cout << endl;
}

// Time: O(n^2) because we are checking each element of B against each element of A to see if it is already in A
// Space: O(n) because we are creating a new array to store the union of A and B
Array *unionUnsortedArray(Array A, Array B)
{
    Array *C = new Array; // dynamically allocate
    int k = 0;
    // Copy all elements from A to C
    for (int i = 0; i < A.length; i++)
    {
        C->A[k++] = A.A[i];
    }
    // Check for each element in B if is already in A. If not, add it to C
    for (int j = 0; j < B.length; j++)
    {
        bool found = false;
        // This for loops compares the current element B[j] with all elements in A
        for (int l = 0; l < A.length; l++)
        {
            // If the current element in B is already in A, we set found to true and break out of the loop
            if (B.A[j] == A.A[l])
            {
                found = true;
                break;
            }
        }
        // If no same element is found in A, we add the current element B[j] to C
        if (!found)
        {
            C->A[k++] = B.A[j];
        }
    }
    // Set the length of C to k, which is the number of elements in C
    // Set the size of C to the sum of the lengths of A and B
    C->length = k;
    C->size = A.length + B.length;
    return C;
}

// Time : O(m + n) where m is the length of A and n is the length of B
// Space: O(m + n) because we are creating a new array to store the union of A and B
Array *unionSortedArray(Array arr1, Array arr2)
{
    Array *arr3 = new Array;
    int i = 0, j = 0, k = 0;
    // We will compare elements from both arrays and add the smaller one to arr3, looping until we reach the end of one of the arrays
    while (i < arr1.length && j < arr2.length)
    {
        // If element in arr1 is smaller, add it to arr3
        // If element in arr2 is smaller, add it to arr3
        // If elements are equal, add one of them to arr3 and increment both i and j, this is to avoid duplicates in the union array
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else if (arr2.A[j] < arr1.A[i])
        {
            arr3->A[k++] = arr2.A[j++];
        }
        else
        {
            arr3->A[k++] = arr2.A[j++];
            i++;
        }
    }
    // These steps are to copy the remaining elements from the array that has not reached the end
    // Copy remaining elements of arr1 (if any)
    while (i < arr1.length)
        arr3->A[k++] = arr1.A[i++];

    // Copy remaining elements of arr2 (if any)
    while (j < arr2.length)
        arr3->A[k++] = arr2.A[j++];

    // Set the length of arr3 to k, which is the number of elements in arr3
    // Set the size of arr3 to the sum of the lengths of arr1 and arr2
    arr3->length = k;
    arr3->size = arr1.length + arr2.length;
    return arr3;
}

int main()
{
    Array A = {{2, 6, 10, 15, 25}, 10, 5};
    Array B = {{3, 6, 7, 15, 20}, 10, 5};

    Array *C;
    C = unionUnsortedArray(A, B);
    Display(C);

    Array *D;
    D = unionSortedArray(A, B);
    Display(D);
    // intersectionUnsortedArray();
    // intersectionSortedArray();

    // diffUnsortedArray();
    // diffSortedArray();

    delete C;
    return 0;
}