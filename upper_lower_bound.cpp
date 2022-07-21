#include <bits/stdc++.h>
using namespace std;
/*
Upper bound and lower bound

1. Upper Bound  upper_bound(first, last, val): gives first position of element which is greater than val
(if no such element is found return end())
2. Lower_bound: gives first position of element which is greater than or equall to val
*/
int main(void)
{

    vector<int> a = {10,20,35,40,50};
    int val;
    cin>>val;
    auto itu = upper_bound(a.begin(), a.end(), val);
    auto itl = lower_bound(a.begin(), a.end(), val);
    cout<<"upper bound: "<<*itu<<endl;
    cout<<"lower bound: "<<*itl<<endl;
  return 0;
}