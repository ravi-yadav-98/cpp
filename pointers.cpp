#include <iostream>
#include <bits/stdc++.h>
using namespace std;


/*
Pointers
- simple number pointer
- Array Pointer;
-  arr[2] = *(arr+2);
*/
void array_pointer()
{
    int arr[10] ={4,2,3,4,5,6,7,8,9,10};
    // cout<<"Address of first Memory Block: "<<arr<<endl;
    // cout<<"Address of first Memory Block: "<<&arr[0]<<endl;

    //print size of array
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Size of array: "<<size<<endl;

    //print all elements of arry using pointer

    // cout<<"Value at 0th index: "<<*arr<<endl;
    // cout<<"Value at 1st index: "<<*(arr+1)<<endl;
    // cout<<"Value at 2nd index: "<<*(arr+2)<<endl;
    // cout<<"Value at 2nd index-> mod: "<<(*arr)+2<<endl;
    // int *p  = arr;
    // for(int i =0;i<size;i++)
    // {
    //     cout<<*p<<" ";
    //     p++;
    // }

    // int i =4;
    // cout<<"i[arr]: "<<i[arr]<<endl;
    /*
    int temp[10];
    cout<<"size of temp: "<<sizeof(temp)<<endl;
    int *p = &temp[0];
    cout<<"size of p: "<<sizeof(p)<<endl;
    cout<<"size of p val: "<<sizeof(*p)<<endl;
    */
   //&->Operator
   int a[20] = {3,4,5,6,7};
   cout<<&a[0]<<endl;
   cout<<&a<<endl;
   cout<<a<<endl;
   cout<<"------"<<endl;
   int *p = &a[0];
   cout<<p<<endl;
    cout<<*p<<endl;
   cout<<&p<<endl; //pointer to pointer

   // arr = arr+1 --> Not Possible



}

void char_array_pointer()
{
    /*
    Char Array: Pointer
    -  Char array and int array are different
    - functions have been differently implemented in std for both
    */
   char c[15] = "raviprakash";
    //    cout<<"Printing char array: "<<c<<endl;; ///wont give pointer of first
    //    cout<<"size of chara array: "<< sizeof(c)<<endl;
    char *pc = &c[0];
    cout<<"Pointer: "<<pc<<endl;
    cout<<"Pointer val: "<<*pc<<endl;


}


int main(void)
{
    // int num=3;
    // int *ptr = &num;
    // cout<<"size of pointer:"<<sizeof(ptr)<<endl;
    // cout<<"Before: "<<num<<endl;
    // (*ptr)*=2;
    // cout<<"After: "<<num<<endl;

    //copying a pointer

    // int *ptr2 = ptr;
    // cout<<"ptr: "<<ptr<<endl;
    // cout<<"ptr2: "<<ptr2<<endl;
    // cout<<"ptr2->value: "<<*ptr2<<endl;

    // array_pointer();
    char_array_pointer();
  return 0;
}
