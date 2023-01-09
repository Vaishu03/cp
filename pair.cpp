#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    pair<string,int>a ("Sahana",80);
    cout << a.first << " " << a.second << endl;
    pair<string,int>b;
    b = make_pair("Sagar",85);
    cout << b.first << " " << b.second << endl;

    vector<pair<string,int>> cls;
    cls.push_back(a);
    cls.push_back(b);
    //cls.push_back("Ram",90); --> this wont work
    cls.emplace_back("Ram",90);
    cls.push_back({"Shyam",91});
    cls.push_back(make_pair("Aman",92));

    for(auto it = cls.begin();it!=cls.end();it++){
        cout << it->first << " " << it->second << endl;
    }

    set<pair<string,int>>my_set;
    my_set.emplace("Hey",1);
}