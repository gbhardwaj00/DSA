#include <iostream>
using namespace std;

int main()
{
    // currently holds garbage values
    int a[5];

    // initialization with declaration
    int x[5] = {1, 2, 3, 4, 5};

    // initializes last 3 elements with 0
    int y[5] = {1, 5};

    // initializing all elements to 0
    int z[5] = {0};

    // size automatic, here size = 3
    int b[] = {1, 2, 3};

    // printing one element, all these statements mean the same thing
    cout << y[1] << endl;
    cout << 1 [y] << endl;
    cout << *(y + 1) << endl;

    // traversing array
    for (int i = 0; i < 5; i++)
    {
        // i[z] means the same thing as z[i]
        cout << z[i] << endl;
    }

    // printing addresses of contiguous memory locations
    for (int i = 0; i < 5; i++)
    {
        printf("%u\n", &z[i]);
    }

    return 0;
}