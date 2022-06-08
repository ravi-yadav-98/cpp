#include <iostream>
// #include <bits/stdc++.h>
#include<set>
using namespace std;

/*
set:
    - store unique elements
    - implement using BST
    -  sorted order: me element access hota hai -->imporatnt
    -  set is slower than unordered set
    - insert(), find(),cout()--> O(logn): BST
    -  begin(), end()--> O(1)


*/
int main(void)
{
    //declaration of set
    set<int> s;
    //inserting element
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    //printing elements
    cout<<"printing before deleting"<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;

    //erasing elements
    set<int>::iterator it = s.begin();
    it++; //second element
    s.erase(it);
    cout<<"printing after deleting"<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;

    //check if an element is present or not in a set
    cout<<"number present or not:-> "<<s.count(40)<<endl;

    //find iterator of an element using find()
    set<int>::iterator itr = s.find(3);
    // cout<<"print itr value: "<<*itr<<endl;

    for(auto it =itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;



  return 0;
}