#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

Memory allocation:
    1. static -> stack (allocated during compile time): fixed /can not be changed during runtime

    int n;
    cin>>n
    int arr[n]
    Note: above array declaration is bad practice: as it is stored in stack and can be crashed
    during runtime if it does not get emough space for larger n
    2. Dynamic --> heap ( can be changed during runtime)

    -  new keyword --> for dynamic memory in heap
    - new char: --> return memory address in heap
    -  can not give nane to variable


    //static                      vs     dynamic allocation
    1. int arr[50];                |     int *arr = new int[50];
    2. 50x4 = 200 byte in stack    |      200 byte in heap + 8 pointer (total 208)
    3. memory releases as soon as  |     heap memory does not release automatically
    program terminates
    4. auto release                |  manual release free() / delete() keyword
*/

int getSum(int *arr, int n)
{
    int sum =0;
    for(int i =0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;

}


int main(void)
{
    //declare memory for char in heap
    // char *ch = new char;
    //ch will be stored in stack and point to char location:
    //pointers are stored in stack
    // *ch ='a';
    // cout<<ch<<endl;

    // int *p = new int;
    // cout<<sizeof(p)<<endl;

    //array in heap
    /*
    int *arr = new int[10];  //-> 40 byte + 8 byte for pointer(in stack)

    for(int i =0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


    //create array --> better way
    int n;
    cin>>n;
    int *arr = new int[n]; //heap me create hoga store
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout<<"sum of numbers: "<<ans<<endl;

    delete []arr;



    //stack memory crash
    while(true)
    {
        int i =4;
        cout<<i<<endl;
    }



    //heap memory crash
    while(true)
    {
        int *ptr = new int;
        *ptr = 3;
        cout<<*ptr<<endl;
    }
    */







  return 0;
}