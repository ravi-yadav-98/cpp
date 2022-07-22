#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
------------Global Variable------------------
A variable that can be shared between functions
- for sharing: create reference variable and share--Fist method
- signle block (stoored value)--> access by many function

global vriable vs local variable
- local variable: within score of function
- global variable: can be accessed from anywhere:
- Rarely used becasue it can be changed: any change at one place will change value for all places
- Never use global var: instead use reference variable
*/


int global_i = 100;

void fun1(int& i)
{
    cout<<i<<endl;

    cout<<global_i<<" in func1"<<endl;

    // func2(i);
}

void fun2(int& i)
{
    cout<<i<<endl;
    cout<<global_i<<" in func2"<<endl;
}
int main(void)
{
    int i =5;
    // int global_i =1;
    // fun1(i);

    // {
    //     cout<<" score:-01"<<endl;
    //     int i =50;
    //     cout<<i<<endl;
    //     cout<<global_i<<endl;
    //     fun1(i);
    // }
    // cout<<" score:-02"<<endl;
    // cout<<global_i<<endl;
    // cout<<i<<endl;
    cout<<global_i<<" in main"<<endl;
    global_i++;
    fun1(i);
    fun2(i);

  return 0;
}