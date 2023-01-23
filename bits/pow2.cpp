#include <bits/stdc++.h>
using namespace std;

bool ispow(int x)
{
    // float temp = log2(x);
    // if (ceil(temp) == floor(temp))
    //     return true;
    // else
    //     return false;
    //if x&y == 0 then x and y are complements of each other

    // if(x&(x-1))
    // return false;
    // else
    // return true;

    return (!(x&(x-1)));
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a = 8;
    if (ispow(a))
        cout << a << " is power of 2 " << endl;
    else
        cout << a << " is not a power of 2 " << endl;
}