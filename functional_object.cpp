#include <iostream>
#include <bits/stdc++.h>
#include<functional>
using namespace std;

/*
Functional Object: function wrapped in a class (can be passed as argument to other function)
- also called functor
-  i.e greater<int>();
*/


void print(int arr[], int n)
{
    for(int i =0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(void)
{
    int arr[] = {1,5,33,6,3,4};

    //sort --ascending
    // sort(arr, arr+5, greater<int>());
    // print(arr, 6);

    unordered_map<string, int> age;
    age.insert({"ravi",24});
    age.insert({"Kruter",26});
    age.insert({"Suri",27});
    age.insert({"Ajay",17});
    age.insert({"Vinay",22});
    // map<string, int> :: iterator it = age.begin();
    // cout<<it->first<<endl;
    //  cout<<it->second<<endl;

    unordered_map<int, int> cnt;
    cnt.insert({0, 5});
    cnt.insert({1, 55});
    cnt.insert({4, 25});
    cnt.insert({3, 35});
    cnt.insert({2, 45});
    cnt.insert({5, 15});
    cnt.insert({6, 65});
    cnt.insert({7, 75});
    cnt.pop_back();
    for(auto it: cnt)
    {
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    


  return 0;
}