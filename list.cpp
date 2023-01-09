// Doubly linked list
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    list<int> list_1;
    list_1.push_front(1);
    list_1.push_front(2);
    list_1.push_front(3);
    list_1.push_front(4);
    list_1.push_back(-1);
    list_1.push_back(-4);
    list_1.pop_front();
    list_1.pop_back();

    for(auto it = list_1.begin();it!=list_1.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "List front is " << list_1.front() << " and list back is " << list_1.back() << endl;

    for(auto it = list_1.rbegin();it!=list_1.rend();it++){
        cout << *it << " ";
    }
    cout << endl;

    auto it = list_1.begin();
    it = next(it,2);
    cout << *it << endl;
    it = prev(it,2);
    cout << *it << endl;
}