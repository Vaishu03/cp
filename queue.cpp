#include <bits/stdc++.h>
using namespace std;

void printq(queue<pair<int, string>> q)
{
    while (!q.empty())
    {
        cout << q.front().first << " " << q.front().second << endl;
        q.pop();
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    queue<pair<int, string>> q;

    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // printq(q);

    q.emplace(1, "roshni");
    q.emplace(2, "Roshan");
    q.emplace(3, "rishab");

    printq(q);
}