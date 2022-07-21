#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int a =4;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of ptr: "<<ptr<<endl;
    cout<<"value of ptr2: "<<ptr2<<endl;
    cout<<"ptr points to : "<<*ptr<<endl;
    cout<<"ptr2 points to : "<<*ptr2<<endl;
    cout<<"ptr2 points to-> a : "<<**ptr2<<endl;   //double pointer

  return 0;
}