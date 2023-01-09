// not an ordered set, but faster than normal set
// uses hashing for efficient element storage
// unique elements

#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    unordered_set<int>obj_set{67,56,89,24,21,25};
    obj_set.insert(20);
    obj_set.insert(23);

    for(auto it = obj_set.begin();it!=obj_set.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}