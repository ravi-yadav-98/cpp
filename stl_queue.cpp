#include <iostream>
// #include <bits/stdc++.h>
#include<queue>

/*
Queue: FIFO: Fist In First Out
*/
using namespace std;
int main(void)
{
    queue<string> q;
    q.push("Ravi");
    q.push("Prakash");
    q.push("Yadav");
    cout<<"q.front(): "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    q.pop();
    cout<<"q.front(): "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;

  return 0;
}