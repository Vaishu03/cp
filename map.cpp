#include<bits/stdc++.h>
using namespace std;

class xy{
    public:
    int x,y;
    xy(){
        x = 0;
        y = 0;
    }
    xy(int a,int b){
        x = a;
        y = b;
    }
    bool operator < (const xy&rhs) const{return x<rhs.x;}
    bool operator > (const xy&rhs) const{return x>rhs.x;}
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    // map of int,int
    map<int,int>int_map;
    int_map[0] = 30;
    int_map[3] = 40;
    int_map[2] = 20;
    int_map[1] = 30;
    for(auto it = int_map.begin();it!=int_map.end();it++){
        cout << it->first << " " << it->second << "\n";
    }

    // map of int,string
    map<int,string>str_map;
    str_map[0] = "apple";
    str_map[1] = "banana";
    str_map[3] = "grapes";
    for(auto it = str_map.begin();it!=str_map.end();it++){
        cout << it->first << " " << it->second << "\n";
    }

    //map of string,int
    map<string,int,greater<>>str_intmap;
    str_intmap["Unibik"] = 20;
    str_intmap["Happy Happy"] = 5;
    str_intmap["Dark fantasy"] = 10;
    for(auto it = str_intmap.begin();it!=str_intmap.end();it++){
        cout << it->first << " " << it->second << "\n";
    }

    //map of structure, int
    map<xy,int,greater<>>uni_map;
    xy one(1,2);
    xy two,three(3,3);
    uni_map[one] = 3;
    uni_map[two] = 10;
    uni_map[three] = -1;
    for(auto it = uni_map.begin();it!=uni_map.end();it++){
        cout << it->first.x << " " << it->first.y << ": " << it->second << "\n";
    }

    //map of string,vector
    map<string,vector<string>>rec_stu;
    rec_stu["Sunitha"].push_back("Computer Society");
    rec_stu["Sunitha"].push_back("Literature club");
    rec_stu["Sunith"].push_back("Computer Society");//.insert() can also be used
    rec_stu["Sumathi"].push_back("art club");
    rec_stu["Sumathi"].push_back("Literature club");

    for(auto it = rec_stu.begin();it!=rec_stu.end();it++){
        cout <<"------"<< it->first << endl;
        for(auto it2 = it->second.begin();it2 != it->second.end();it2++){
            cout << *it2 << ",";
        }
        cout << endl;
    }
    return 0;
}