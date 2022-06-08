#include <iostream>
// #include <bits/stdc++.h>
#include<queue>
using namespace std;
/*
priority Queue:
    - first element is always greatest
    - min heap or max heap;
    - so when pop: always largest will come out

*/
int main(void)
{   //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(7);
    // int n= maxi.size();

    // for(int i=0;i<n;i++)
    // {
    //     cout<<maxi.top()<<" ";
    //     maxi.pop();

    // }cout<<endl;  

    mini.push(1);
    mini.push(3);
    mini.push(5);
    mini.push(7);

    int n = mini.size();
    for(int i=0;i<n;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();

    }cout<<endl;  

  return 0;
}