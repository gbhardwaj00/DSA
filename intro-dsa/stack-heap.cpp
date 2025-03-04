#include <iostream>
using namespace std;

// Space for variable 'c' and 'b' is allocated
void fun2(int b)
{
    int c = b;
    cout << "fun2" << endl;
    // After fun2 returns, the stack frame is deallocated and the memory is freed
    // and then the control is returned to the function fun1
}

// Space for variable 'a' is allocated in the stack frame of the function fun1
void fun1(int a)
{
    cout << "fun1" << endl;
    // The function fun2 is called and a new stack frame is pushed onto the stack section of memory above fun1
    fun2(a);

    // After fun1 returns, the stack frame is deallocated and the memory is freed
    // and then the control is returned to the function main
}

int main()
{
    /*****************STACK******************** */
    // Statically allocated memory during compilation time, pushed onto the stack section of memory
    // This memory is automatically deallocated when the function returns
    int a = 10;
    int b = 20;

    // A new stack frame is pushed onto the stack section of memory above the stack frame of 'main' function
    fun1(a);

    // The control is with main function now

    // As discussed above, since the stacking/unstacking of stack frames for these three functions occurs in the memory, this part of memory is called stack memory

    /***********HEAP****************/
    // Dynamically allocated memory during runtime, so it is not statically allocated(whch is done during compilation time)
    // Heap memory should be treated like a resource that needs to be managed
    // If not managed properly, it can lead to memory leaks (deallocation required)
    // Program cannot directly access this memory, it needs to be accessed via pointers

    int *p;
    p = new int; // Allocating memory in the heap
    *p = 10;
    cout << *p << endl;

    // Deallocating memory in the heap
    delete p;
    p = nullptr;

    int *arr = new int[5]; // Allocating memory for an array in the heap
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    // deallocating memory for an array in the heap
    delete[] arr;
    arr = nullptr;

    // if we don't deallocate the memory, it will still belong to the program and will not be available for other programs or the same program
    // This is called memory leak
    return 0;
}