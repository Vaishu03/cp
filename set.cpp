#include <bits/stdc++.h>

using namespace std;

// class Stu{
//     public:
//         string name;
//         float score;
//     Stu(string a,float b){
//         name = a;
//         score = b;
//     }
//     // overload < operator
//     bool operator < (const Stu& second) const {return score<second.score;}
//     bool operator > (const Stu& second) const {return score>second.score; }
// };

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


    // set<Stu,greater<>>class1 = {{"Geeta",8.9},{"Sita",9.2},{"Ramya",9.5}};

    // for(auto it = class1.begin();it!=class1.end();++it){
    //     cout << it->name << " " << it->score << "\n";
    // }
    set<int>s = {2,3,4,5,6,1};
    s.insert(10);
    s.insert(20);
    // auto it = s.begin();
    // s.erase(it);
    // s.erase(4);
    // it = s.begin();
    // auto it2 = s.find(3);
    // set <int,greater<int>>s1={2,3,4,5,6,1};
     for(auto it = s.begin();it!=s.end();++it){
         cout << *it << " ";
     }cout <<"\n";
     if(s.count(8))
     cout << "Value is present\n";
     else
     cout << "Value not present\n";
    //  s.erase(it,it2);
    //  for(auto it = s.begin();it!=s.end();++it){
    //      cout << *it << " ";
    //  }cout <<"\n";
    // for(auto it = s1.begin();it!=s1.end();++it){
    //     cout << *it << " ";
    // }cout <<"\n";


    return 0;
}