#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
-------------Recursion Notes------------
-
*/
void reachHome(int src, int dest)
{
    cout<<"Source "<< src << " destination "<<dest<<endl;
    if(src == dest)
    {
        cout<<" Ghar Pahuch gaya !"<<endl;
        return ;
    }

    //processing
    src++;
    reachHome(src, dest);

}


//Fibonnacci series 0,1,1,2,3,5,8

int fibonacci(int n)
{
    int first =0;
    int second =1;
    if(n==1){return 1;}
    if(n==0){ return 0;}
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;

}

//say digits
void sayDigit(int n, string arr[])
{
    if(n == 0)
    {
        return;
    }
    //processing
    int digit = n % 10;
    n = n/10;


    //Recursive call
    sayDigit(n, arr);
    cout<<arr[digit] << " ";

}

int main(void)
{
    // int dest =10;
    // int src =1;
    // cout<<endl;
    // reachHome(src,dest);
    // int n;
    // cin>>n;
    // //print n fibonacii series
    // for(int i =0; i<n; i++)
    // cout<<fibonacci(i)<<" ";



    //say digit
    string arr[10] =  {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    sayDigit(n, arr);
  return 0;
}