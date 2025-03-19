#include <iostream>
using namespace std;

// Time: O(logn) because we are dividing the array in half each time, for example if n = 8, log2(8) = 3 since 2^3 = 8
// This means that we can find the element/solution in at most 3 steps
// Space: O(1), no extra space used
int linearBinarySearch(int A[], int key, int low, int high)
{
    // The search should keep going until low is less than or equal to high
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
        {
            cout << key << " has been found at index " << mid << endl;
            return mid;
        }
        // If the key is less than the middle element, we search in the left half of the array
        else if (key < A[mid])
        {
            high = mid - 1;
        }
        // If the key is greater than the middle element, we search in the right half of the array
        else
            low = mid + 1;
    }
    cout << key << " is not present in the array\n";
    return -1;
}

// Time: O(logn) because we are dividing the array in half each time just like linearBinarySearch
// Space: O(logn) because of the recursive calls on the stack
int recusriveBinarySearch(int A[], int key, int low, int high)
{
    // Base case, if low is greater than high, the key is not present in the array
    if (low > high)
    {
        cout << key << " is not present in the array\n";
        return -1;
    }
    int mid = (low + high) / 2;
    if (A[mid] == key)
    {
        cout << key << " has been found at index " << mid << endl;
        return mid;
    }
    // If the key is less than the middle element, we search in the left half of the array
    else if (key < A[mid])
    {
        recusriveBinarySearch(A, key, low, high - 1);
    }
    // If the key is greater than the middle element, we search in the right half of the array
    else
        recusriveBinarySearch(A, key, low + 1, high);
}

int main()
{
    // For binary search to work, the array must be sorted
    int A[] = {2, 4, 5, 7, 13, 14, 15, 23, 25, 29, 32, 35, 36, 37, 39};
    int n = sizeof(A) / sizeof(A[0]);
    int key = 37;
    int low = 0, high = n - 1;
    int mid;

    // LINEAR
    int index = linearBinarySearch(A, key, low, high);

    // checking failure
    key = 12; // not in the array
    index = linearBinarySearch(A, key, low, high);

    // RECURSIVE
    key = 37;
    index = recusriveBinarySearch(A, key, low, high);

    // checking failure
    key = 12;
    index = recusriveBinarySearch(A, key, low, high);
    return 0;
}