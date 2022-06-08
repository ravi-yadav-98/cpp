#include <iostream>
// #include <bits/stdc++.h>
#include<deque>
using namespace std;
/* deque - double ended deque
insert and delete elements from both ends
- Not contiguous memory(like vector or array), multiple static array
- Dynamic in nature
- random access (at operation)
*/

int main(void)
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);

    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    // d.pop_back();
    // d.pop_front();
    
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"first index element "<<d.at(1)<<endl;
    // cout<<"size of deque: "<<d.size();
    // cout<<"Empty or not "<< d.empty();
    cout<<"MAX_SIZE: "<<d.max_size();
    


  return 0;
}