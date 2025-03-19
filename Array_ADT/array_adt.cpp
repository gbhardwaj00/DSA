#include <iostream>
using namespace std;

struct Array
{
    // a pointer that will be initialized with the array
    int *A;
    // the size of the array
    int size;
    // no of elements in the array
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

// Time: O(1), always same number of operations
// Space: O(1), no extra space used
void append(int number, struct Array *arr)
{
    // if length is less than size, we can add the element
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = number;
        arr->length++;
        cout << number << " has been added to the array!\n";
    }
    else
    {
        cout << "Array is full - cannot append element!\n";
    }
}

// Time : O(n) - n number of elements could have to be moved in the worst case(Insertion at index 0)
// Space: O(1) - no extra space used
void insert(int number, int index, struct Array *arr)
{
    cout << "Inserting " << number << " at index " << index << endl;
    if (arr->length == arr->size)
    {
        cout << "Array is already full, cannot insert a new element!\n";
        return;
    }
    if (index >= arr->size || index < 0)
    {
        cout << "Provided index is out of bounds!\n";
        return;
    }
    // Starting at last element in the array, move each element one position to the right
    // until we reach the index where we want to insert the new element
    for (int i = arr->length - 1; i >= index; i--)
    {
        arr->A[i + 1] = arr->A[i];
    }
    // insert the new element at the index
    arr->A[index] = number;
    // increment the length of the array as one element has been added
    arr->length++;
}

// Delete an element at a given index
// Time: O(n) - n number of elements could have to be moved in the worst case(Deletion at index 0)
// Space: O(1) - no extra space used
void deleteElement(struct Array *arr, int index)
{
    cout << "Deleting element " << arr->A[index] << " at index " << index << endl;
    if (index < 0 || index >= arr->length)
    {
        cout << "Index out of bounds!\n";
        return;
    }
    // Starting at the index, move each element one position to the left
    for (int i = index; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    // At this point the last element is a duplicate, but when we decrement the length, it ignores it in the new version of the array
    arr->length--;
}

int main()
{
    struct Array arr;
    cout << "Enter size of the array: ";
    cin >> arr.size;

    // created on heap because we want dynamic sizing,
    arr.A = new int[arr.size];
    // initially no elements in the array
    arr.length = 0;

    // inserting elements by user input
    int n;
    cout << "Enter the number of elements to insert: ";
    cin >> n;
    cout << "Enter all elements one by one: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;
    displayArray(arr);

    // Appending an element
    // using passing by address because we want to modify the struct we are passing
    append(7, &arr);

    displayArray(arr);

    // Appending an element, to check if append fails when array is full
    append(8, &arr);
    displayArray(arr);

    // inserting an element at an index
    insert(7, 5, &arr);
    displayArray(arr);

    // This will fail as array is full
    insert(10, 5, &arr);

    // Deleting an element at an index
    deleteElement(&arr, 3);
    displayArray(arr);

    return 0;
}