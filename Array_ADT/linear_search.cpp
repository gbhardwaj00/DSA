#include <iostream>
using namespace std;

struct Array
{
    // a static array
    int A[10];
    // the size of the array
    int size;
    // no of elements in the array
    int length;
};

// Time: O(n) because we have to iterate through all elements in the worst case
// Space: O(1), no extra space used
int linearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == key)
        {
            cout << "Element found at index: " << i << endl;
            /**We can use transposition here to improve the search time for the next time the same element is searched
             if (i > 0)
             {
                 swap(arr.A[i], arr.A[i - 1]);
             }
            */
            /**
             We can also use move to front heuristic here to improve the search time for the next time the same element is searched
             if (i > 0)
             {
                 swap(arr.A[i], arr.A[0]);
             }*/
            return i;
        }
    }
    cout << "Element not found!\n";
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    // Element to search, we want to find the index of this element
    int key = 4;
    int index = linearSearch(arr, key);

    // Showing failure case, key does not exist in the array
    key = 7;
    index = linearSearch(arr, key);
    return 0;
}