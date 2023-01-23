#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a = 5, b = 8, x = 100, y = 1;
    // cout << "OR opr " << (a|b) << endl;
    // cout << "AND opr " << (a&b) << endl;
    // cout << "XOR opr " << (a^b) << endl;
    // cout << "Complement " << (~a) << endl;

    cout << "right shift of x: " << (x >> 1) << endl;
    cout << "left shift of x: " << (x << 1) << endl;

    while (x)
    {
        cout << x << endl;
        x = x >> 1;
    }

    cout << endl
         << endl;
    while (y < 100)
    {
        cout << y << endl;
        y = y << 2;
    }

    cout << endl;
    cout << "2 raised to power of 6 is: " << (1<<6) << endl;
}