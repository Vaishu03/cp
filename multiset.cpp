#include <bits/stdc++.h>
using namespace std;

// duplicates are allowed in a multi-set & it is ordered(asc||desc)
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    // set<int, greater<>>s {5,1,2,3,4,5};
    multiset<int, greater<>>m_s {5,1,2,3,3,4,5};
    multiset<int,greater<>>m_s1;

    cout << "size of m_s is "<<m_s.size() << " and max size of m_s is " << m_s.max_size() << "\n";
    cout << "size of m_s1 is "<<m_s1.size() << " and max size of m_s1 is " << m_s1.max_size() << "\n";

    //m_s.clear();
    auto it1 = m_s.find(4);
    auto it2 = m_s.find(2);
    m_s.erase(it1,++it2);//[it1,it2)
    //m_s.erase(3);
    cout << "size of m_s is "<<m_s.size() << " and max size of m_s is " << m_s.max_size() << "\n";


    if(m_s.empty())
    cout << "m_s is empty\n";
    if (m_s1.empty())
    cout << "m_s1 is empty\n";   
    // cout << "standard set: " <<"\n";
    // for(auto it = s.begin();it != s.end();it++){
    //     cout << *it << " ";
    // }
    // cout <<"\n";
    cout << "standard multiset: " <<"\n";
    for(auto it = m_s.begin();it != m_s.end();it++){
        cout << *it << " ";
    }
    return 0;
}