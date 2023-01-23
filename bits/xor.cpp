#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t, n, x, orr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        x = arr[0];
        orr = arr[0];
        for (int i = 0; i < n; i++)
        {
            x = x & arr[i];
            orr = orr | arr[i];
        }
        orr = orr ^ x;
        cout << x << " " << orr << endl;
    }
}