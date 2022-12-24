#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    vector<int>v; //(5,0)
    v.reserve(20);
    vector<int>v1 {1,2,3,4,5};
    // v1.push_back(2);
    // v1.push_back(3);
    // cout << v.size() << "\n";
    // cout << "Size of v1 is "<<v1.size() << " and capacity of v1 is "<<v1.capacity() << "\n";
    // v1.push_back(30);
    // cout << "Size of v1 is "<<v1.size() << " and capacity of v1 is "<<v1.capacity() << "\n";
    // v1.pop_back();
    // cout << "Size of v1 is "<<v1.size() << " and capacity of v1 is "<<v1.capacity() << "\n";
    // v1.pop_back();
    // cout << "Size of v1 is "<<v1.size() << " and capacity of v1 is "<<v1.capacity() << "\n";
    // cout << v1[2];
    int i = 10;
    while(i--){
        v.push_back(0);
        cout << "v has size of " << v.size() << " and capacity of " << v.capacity()<<"\n";
    }
    for(int j=0;j<v1.size();j++){
        cout << v1[j] << " ";
    }cout << "\n";
    v1.insert(v1.begin()+2,56);
    for(int j=0;j<v1.size();j++){
        cout << v1[j] << " ";
    }cout << "\n";
    // v1.clear();
    v1.erase(v1.begin()+1);
    for(int j=0;j<v1.size();j++){
        cout << v1[j] << " ";
    }cout << "\n";
    cout << "v1 has size of " << v1.size() << " and capacity of " << v1.capacity()<<"\n";
}