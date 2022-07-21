#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*

Passing Pointer to function
- array passed to a function as pointer(first element)

*/

int sumArray(int *arr, int n)
{   
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
void print(int *p)
{
    cout<<*p<<endl;
}
int main(void)
{
    // int val =5;
    // int *p =&val;
    // print(p);

    ///Array to function

    int arr[6] = {1,2,3,4,5,6};
    cout<<"array sum: "<<sumArray(arr+2, 4)<<endl;

    //we can pass a part of array to function

  return 0;
}