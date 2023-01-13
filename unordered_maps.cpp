#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    /*unordered map*/
    unordered_map<int,int>my_map{{1,1},{2,4},{3,9},{4,16}};

    my_map.emplace(6,2);
    auto it = my_map.find(3);

    cout << it->first << " " << it->second << endl;
    
    for(auto it=my_map.begin();it!=my_map.end();it++){
        cout << it->first << " " << it->second << endl;
    }

    /*unordered multimap*/

    unordered_multimap<int,int>my_multimap{{1,1},{2,4},{3,9},{4,16},{4,0}};
    cout << endl;

    auto it1 = my_multimap.equal_range(4);

    for(auto it = it1.first;it!=it1.second;it++){
        cout << it->first << " " << it->second << endl;
    }

    for(auto it=my_multimap.begin();it!=my_multimap.end();it++){
        cout << it->first << " " << it->second << endl;
    }

}