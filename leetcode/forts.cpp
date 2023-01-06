#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    vector<int>fort = {1,0,0,-1,0,0,0,0,1};
    int c;
    for(int i=0;i<fort.size();i++){
        c = 0;
        if(fort[i] != 1)
        break;
        while(fort[i]!=-1){
            if(fort[i]==0)
            c++;
        }
    }
    for(int i=fort.size()-1;i>=0;i--){
        c = 0;
        if(fort[i] != 1)
        break;
        while(fort[i]!=-1){
            if(fort[i]==0)
            c++;
        }
    }
    cout << c;


    return 0;
}