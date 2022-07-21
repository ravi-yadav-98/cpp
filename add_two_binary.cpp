#include <iostream>
#include <bits/stdc++.h>
#include <string>
//Add two binary strings
using namespace std;
string addTwoBinaryNum(string bin1, string bin2)
{
    //carry
    int carry =0;
    int i=0;
    int x = 0;
    int y  = 0;
    int n = bin1.size();
    int m = bin2.size();
    string ans ="";
    while(i<n or i<m or carry !=0)
    {
        x =0, y=0;
        if(i<n and bin1[n-1-i]=='1')
        {
            x='1'-'0';
        }
        if(i<m and bin2[m-1-i]=='1')
        {
            y ='1'-'0';
        }
        int curr =(x+y+carry)%2;
        ans +=to_string(curr);
        // cout<<ans<<endl;
        carry =((x+y+carry)/2);
        i++;

    }

    // int j =ans.size()-1;
    // while(ans[j] == 0)
    // {
    //     ans.pop_back();
    //     j--;
    // }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(void)
{
    string bin1, bin2;
    cout<<"Enter first binary number: ";
    cin>>bin1;
    cout<<endl;
    cout<<"Enter Second binary number: ";
    cin>>bin2;
    cout<<"Sum of two binary numbers: "<<endl<<addTwoBinaryNum(bin1, bin2);
    

  return 0;
}