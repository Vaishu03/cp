// single linkedlist
#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int arr[5] = {2, 3, 4, 5, 6};
    forward_list<int> my_list;
    my_list.push_front(4);
    my_list.push_front(5);
    my_list.push_front(2); // 2,5,4

    auto it = ++my_list.begin();
    my_list.insert_after(it, -1);           // 2,5,-1,4
    my_list.insert_after(it, 4, 2);         // 2,5,2,2,2,2,-1,4
    my_list.insert_after(it, arr, arr + 5); // 2,5,2,3,4,5,6,2,2,2,2,-1,4

    for (auto it = my_list.begin(); it != my_list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    forward_list<pair<int, int>> list_2;

    list_2.emplace_front(3, 4);
    list_2.push_front({4, 5});
    list_2.push_front(make_pair(5, 6));

    auto it2 = ++list_2.begin();

    list_2.insert_after(it2, make_pair(6, 7));
    list_2.emplace_after(it2, 7, 8);

    for (auto it = list_2.begin(); it != list_2.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << "Value at front is " << list_2.front().first << " " << list_2.front().second << endl;
    cout << endl;

    list_2.pop_front();

    for (auto it = list_2.begin(); it != list_2.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    it2++;
    cout << endl
         << endl;
    list_2.erase_after(it2,list_2.end());
    for (auto it = list_2.begin(); it != list_2.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}