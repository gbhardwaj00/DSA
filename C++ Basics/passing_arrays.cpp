#include <iostream>
using namespace std;

// Need to pass in the size
// 'A' is a pointer to the array, array is passed by address, cannot be passed by value
// int A[] and int *A mean the same thing for arrays
void printArray(int A[], int size)
{
    // array passed as argument is modifiable
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    cout << "Array ended!" << endl;
}

// Returning an array
// int [] and int * mean the same thing for arrays
int *create_array(int size)
{
    int *A = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        A[i] = i;
    }
    return A;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // 'arr' is the a pointer to the first block of space(A[0]) in which the array is stored
    // we need to pass the size of the array because only the pointer to the first element is passed when we pass 'arr' which does not contain the size information
    printArray(arr, 5);

    // returning array
    int *returned_array;
    int array_size = 5;
    returned_array = create_array(array_size);

    printArray(returned_array, array_size);

    free(returned_array);
    return 0;
}