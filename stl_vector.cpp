#include <iostream>
// #include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(void)
{
    vector<int> v = {10,12,14,16,18,20};
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
   
  return 0;
}