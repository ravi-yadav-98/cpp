#include <iostream>
// #include <bits/stdc++.h>
#include<map>
using namespace std;


/*
Map:
    - store value if form  of <key, value>
    - Keys are unique and store only one value(can be same)
    - sorted order of key (comes out)
    - insert(), erase(), count()--> O(logn)

*/
int main(void)
{   //declaration of map
    map<int, string> m;
    //add key, values
    m[3] = "Ravi";
    m[2] = "Prakash";
    m[1] = "Yadav";
    //other method to add element
    m.insert({4, "Gonda"});
    for(auto i:m)
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    //check if some key is present
    cout<<"Key present or not:-> "<<m.count(3)<<endl;


  //erase
  m.erase(4);  //key
  cout<<"printing after erasing"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    //return itereator
    auto it = m.find(3);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<"-->"<<(*i).second<<endl;
    }

 return 0;

}
