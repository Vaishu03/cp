#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    // vector <int>can = {12,1,12};
    // int extra = 10,m;
    // vector<bool>res;
    // for(int i=0;i<can.size();i++){
    //     m = *max_element(can.begin(),can.end());
    //     if((can[i] + extra)>=m){
    //         res.push_back(1);
    //     }
    //     else
    //     res.push_back(0);
    // }
    // for(int i=0;i<res.size();i++){
    //     cout << res[i] << " ";
    // }
    vector<int>nums = {7,7,7,7};
    vector<int>ans;
    int c;
    for(int i=0;i<nums.size();i++){
        c = 0;
        for(int j=0;j<nums.size();j++){
            if((i!=j) && (nums[j]<nums[i])){
                c++;
            }
        }
        ans.push_back(c);
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}