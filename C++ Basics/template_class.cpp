#include <iostream>
using namespace std;

// template class
// a generic class that can work with any data type
// T is a placeholder for the data type
template <class T>
class Arithematic
{
private:
    T a;
    T b;

public:
    Arithematic(T a, T b);
    T add();
    T sub();
};

// scope resolution operator(::) is used to define a function outside the class
// need to use the template keyword again because the function is outside the class
// Pass <T> parameter when you use a template class
template <class T>
Arithematic<T>::Arithematic(T a, T b)
{
    // 'this' is a pointer to the object that is calling the function
    // since the member and the parameter have the same name, we use 'this' pointer to differentiate
    this->a = a;
    this->b = b;
}

template <class T>
T Arithematic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithematic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    // using int data type, class will be created for int data type
    Arithematic<int> a(5, 2);
    cout << "Addition: " << a.add() << endl;

    // using float data type, class will be created for float data type
    Arithematic<float> b(5.5, 2.2);
    cout << "Subtraction: " << b.sub() << endl;

    // using char data type, class will be created for char data type
    Arithematic<char> c('A', 'Z');
    cout << "Addition: " << c.add() << endl;

    return 0;
}