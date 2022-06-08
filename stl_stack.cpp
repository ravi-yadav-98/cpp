#include <iostream>
// #include <bits/stdc++.h>
#include<stack>
using namespace std;

/*
stack: LIFO: Last In First Out
*/
int main(void)
{
    stack<string> s;
    s.push("Ravi");
    s.push("Prakash");
    s.push("Yadav");
    // cout<<"Top element: "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element: "<<s.top()<<endl;
    cout<<"size of stack: "<<s.size()<<endl;;
    cout<<"Empty or not : "<<s.empty()<<endl;

  return 0;
}