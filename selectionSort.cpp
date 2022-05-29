#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//helper functions--> swap two number
void swapTwoNum(int *xp, int *yp)
{
    int temp= *xp;
    *xp = *yp;
    *yp = temp;
    // cout<<*xp<<" "<<*yp;
}
//print array
void printArray(int arr[], int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Sorting in c++
// 1. Selection Sort--> 
//1. find minimun of array and swap it with the first element of array
//2. repeat it for remaining part


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            min_idx = j;
            // Swap the found minimum element
            // with the first element
            swapTwoNum(&arr[min_idx], &arr[i]);

        }
    }
}
 
//driver function
int main(void)
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr, n);
    printArray(arr, n);
}