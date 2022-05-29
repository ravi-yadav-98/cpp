#include <iostream>
#include <bits/stdc++.h>
#include<climits>
using namespace std;
//create array by user input
void createArray(void)
{
    int n;
    cout<<"input array size: ";
    cin>>n;
    int arr[n];
    cout<<"input elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Output:"<<endl;

    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//find max and min element of an array
void findMaxMin(void)
{
    int size;
    cin>>size;
    int maxNo=INT_MIN; 
    int minNo=INT_MAX;
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i]<minNo)
        {
            minNo = arr[i];
        }
        // maxNo = max(maxNo, arr[i]);
        // minNo = min(minNo, arr[i]); 
    }
    cout<<maxNo<<" "<<minNo;
}


//driver function
int main(void)
{
    // createArray();
    findMaxMin();
    return 0;
}