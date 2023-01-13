#include <bits/stdc++.h>
using namespace std;

void printstk(stack<pair<int,float>>stk){
    while(!stk.empty()){
        auto temp = stk.top();
        cout << temp.first << " " << temp.second << endl;
        stk.pop();
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    stack<int>stk;

    stk.push(2);
    stk.push(1);
    stk.push(0);

    stack<pair<int,float>>stk2;
    
    stk2.emplace(0,0.1);
    stk2.emplace(1,1.1);
    stk2.emplace(2,2.1);
    stk2.emplace(3,3.1);
    stk2.emplace(4,4.1);

    printstk(stk2);

}