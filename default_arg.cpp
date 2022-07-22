#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
--------Default Arguments----------------
-> To create optional argument give some default argument
-> put default arguments at right most

*/


void print(int arr[], int start=0, int end =9)
{
    for(int i =start; i<end; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,9};
    int end =9;
    int start =3;
    print(arr,start);
  return 0;
}