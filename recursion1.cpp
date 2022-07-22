#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
<<--------------Recursion----------------->>
    -> when a function calls itself(directly or indirectly) within its body
    -> Big problem solution depends on similar small problem
    recursive funtion:
    1. Recursive Relation
    2. Base case--> when stop (if not given --> segmentation fault-> stack overflow)
    3. processing (cout,++, -- etc)

    Head and tain Recursion:
    - if Recursive function comes after Prpcessing -> tail else head
*/

int M = 47;
//1
long long getPowerOftwo(int n)
{
    if(n==0 ){return 1;}
    return (2*getPowerOftwo(n-1));    //%M;
        //recursive relation

}

//2
long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}


//3
void print(int n)
{
    if(n == 0)
    {
        return;
    }
    //tail recursion
    cout << n <<endl;
    //head
    // print(n-1);
    cout << n <<endl;
}
//drivers function
int main(void)
{

    //call
    int n;
    cin>>n;
    // cout<<getPowerOftwo(n);
    // cout<<factorial(n);
    print(n);
  return 0;
}