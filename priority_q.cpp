#include <bits/stdc++.h>
using namespace std;

void printpq(priority_queue<int>pq){
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    priority_queue<int>q;
    q.push(6);
    q.push(3);
    q.push(5);
    q.push(4);

    printpq(q);
}