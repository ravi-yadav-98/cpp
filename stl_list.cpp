#include <iostream>
// #include <bits/stdc++.h>
#include<list>
//list: using doubly linked list
// random access not possible
//double ended, insert delete

using namespace std;
int main(void)
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    // for(int i:l)
    //     cout<<i<<" ";

    // cout<<"size of list "<<l.size();

    //new list
    list<int> l2(5,100);
    for(int i:l2)
    {
        cout<<i<<" ";
    }
  return 0;
}