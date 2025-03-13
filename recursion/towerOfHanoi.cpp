#include <iostream>
using namespace std;

// Time: O(2^n), each recusrive call makes 2 more recursive calls, grows exponentially
// Space: O(n) which is just the largest height of the call stack
void towerOfHanoi(int numOfDisks, char from, char aux, char to)
{
    if (numOfDisks > 0)
    {
        towerOfHanoi(numOfDisks - 1, from, to, aux);

        cout << "Move disk " << numOfDisks << " from " << from << " to " << to << endl;

        towerOfHanoi(numOfDisks - 1, aux, from, to);
    }
}

int main()
{
    towerOfHanoi(4, 'A', 'B', 'C');
    return 0;
}