#include <bits/stdc++.h>
using namespace std;
/*
C++ Inbuilt functions

*/
bool isPositvie(int x)
{
    return x>0;
}
int main(void)
{
    //lambda function
    // auto sum = [](int x, int y){return x+y;};
    // cout<<sum(1,2);

    vector<int> v = {1,3,5,4};
    // cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;
    // cout<<all_of(v.begin(), v.end(), isPositvie);
    // cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;
    // cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;

    //check for odd even
    cout<<all_of(v.begin(), v.end(), [](int x){return x%2 !=0;})<<endl;
  return 0;
}