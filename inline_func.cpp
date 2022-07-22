#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
----------Inline Function:--------------
- Are used to reduce the function call overhead.
- when calling function multiple times --> stack will be overflowed

whenever we can function from main --> func and variable are stored in stack : performace hit
-  Inline function: if function body is of single line: complier makes it inline
- 2-3 line body> compiler may do
- >3 line body-> not possible
-  similar to macro: body of inlined functin will be replaced with function call before compilation
- no extra memory and function call overhead
- function call replaced with function body
*/


void func(int a, int b)
{
    a++;
    b++;
    cout<< a << b << endl;
}

inline int getMax(int& a, int& b)
{
    return (a>b)?a:b;
}

int main(void)
{
    int a =2,b=4;
    int ans=0;
    // func(a,b);
    // int ans = (a>b) ? a : b; //to get max a and b
    // cout<<ans;
    ans = getMax(a,b);
    cout<<ans<<endl;
    a = a+2;
    b = b+1;
    // int ans = (a>b) ? a : b; //again call



    //call getMax fun
    ans = getMax(a,b);
    cout<<ans<<endl;

    //Note: copies of a and b will created whenever fun willl be called: reference variable can be used
    // but function will be called -





  return 0;
}