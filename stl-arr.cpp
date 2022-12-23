#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false); // used to decrease the time complexity of cout
    std::cin.tie(NULL); // used to decrease the time complexity of cin
    array<int,5> a;//{1,2,3,4,5};
    a = {1,23,45,6456,34};
    cout << a[0] <<"\n";
    cout << a.at(0)<<"\n";
    //cout << a.at(6) <<"\n";// throws an exception instead of runtime error
    cout << a.front() << "\n";
    cout << a.back() << "\n";
    //a.fill(0);
    //cout << a.front() << "\n";
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    return 0;
}