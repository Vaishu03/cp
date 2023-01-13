#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    unordered_multiset<int>my_set{1,6,43,54,6,34,65,23,1};

    my_set.insert(-1);
    my_set.insert(99);
    my_set.insert(0);

    auto it = my_set.find(6);
    my_set.erase(it);
    my_set.erase(1);

    cout << my_set.count(-1) << endl;
    for(auto it = my_set.begin();it!=my_set.end();it++){
        cout << *it << " ";
    }

}