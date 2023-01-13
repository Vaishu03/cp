#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    deque<int>dq{1,2,3,4,5,6,7};

    dq.push_back(1);
    dq.push_back(3);
    dq.pop_back();
    dq.push_front(-1);
    dq.pop_front();
    dq.push_front(0);

    cout << "deque at idx 5: " << dq[5] << endl;

    for(auto it=dq.begin();it!=dq.end();it++){
        cout << *it << " ";
    }
}