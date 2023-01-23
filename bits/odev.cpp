#include <bits/stdc++.h>
using namespace std;

bool iseven(int n)
{
    // return(!(n&1));
    if ((n | 1) == n)
        return false;
    else
        return true;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 9;
    if (iseven(n))
        cout << n << " is even " << endl;
    else
        cout << n << " is odd " << endl;
}