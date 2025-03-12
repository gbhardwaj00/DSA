#include <iostream>
using namespace std;

// f(p, p)
int f(int &x, int c)
{
    c = c - 1;
    if (c == 0)
        return 1;
    x = x + 1;
    return f(x, c) * x;
}

int main()
{
    cout << "You should 'REALLY' do these by yourself " << endl;
    // Here you learn splitting string over multiple lines YAY
    cout << "But if you feel stuck after trying them for a while,"
            "feel free to ping me at my IG - @goouuraav or"
            " e - mail at gouravbhardwaj3007@gmail.com "
         << endl;
    int a = 5;
    cout << f(a, 5);
}
