#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Reference Variable:
    - same memory but different names
    - two variable pointing same memory location
    - pass by reference in function
    - new memory is not created in pass by reference
    -  new memory is created in pass by value

*/
//test--> pass By value
void update(int i)  //passing by value
{
    i=i+2;
    cout<<"function ka i: "<<i<<endl;
}

//passing by reference
void update2(int& i)  //passing by ref
{
    i=i+2;
    // cout<<"function ka i: "<<i<<endl;
}
//swap two numbers
void swap(int& i, int& j)
{
    int temp = i;
    i = j;
    j = temp;
}

// Reference as return type
/*
int& func(int a)  //bad practice
{
    //local variable
    int num =a;
    int& ans = num;
    return ans;
}
*/

int main(void)
{
    /*
    int i =2;
    int &j =i; //reference variable j pointing same memory as i (both i and j pointing 5)
    cout<<"address of i: "<<&i<<endl;
    cout<<"adrress of j: "<<&j<<endl;
    cout<<"value before increment"<<endl;
    cout<<"value of i: "<<i<<endl;
    cout<<"value of j: "<<j<<endl;

    //change val of i
    i++;
    cout<<"value after i increment"<<endl;
    cout<<"value of i: "<<i<<endl;
    cout<<"value of j: "<<j<<endl;

    j++;
    cout<<"value after j increment"<<endl;
    cout<<"value of i: "<<i<<endl;
    cout<<"value of j: "<<j<<endl;
    */
    //    int i =2;
    //    cout<<"Before update: "<<i<<endl;
    //    update2(i);
    //    cout<<"After update: "<<i<<endl;
    int i =2;
    int j =3;
    cout<<"Before swaping: "<<i<<" "<<j<<endl;
    swap(i,j);
    cout<<"After  swaping: "<<i<<" "<<j<<endl;



  return 0;
}