#include <bits/stdc++.h>
using namespace std;

int togg(int n, int i)
{
    return (n ^ (1 << (i - 1)));
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 17, i = 4;

    cout << "Toggling ith bit of 17 gives: " << togg(n, i) << endl;
}