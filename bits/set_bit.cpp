#include <bits/stdc++.h>
using namespace std;

bool ith_is_set(int, int);

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    if (ith_is_set(13, 2))
    {
        cout << "set " << endl;
    }
    else
        cout << "Not set" << endl;

    if (ith_is_set(13, 3))
        cout << "set" << endl;
    else
        cout << "Not set" << endl;
}

bool ith_is_set(int n, int k)
{
    // if(n&(1<<(k-1)))
    // return true;
    // else
    // return false;

    if ((n >> (k - 1)) & 1)
        return true;
    else
        return false;
}