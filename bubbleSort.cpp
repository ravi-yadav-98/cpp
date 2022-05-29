#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//print array
void printArray(int arr[], int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//Sorting in c++
// 2. Bubble Sort--> 
// repeatedly swapping the adjacent elements if they are in the wrong order

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);   //std::swap()
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
    bubbleSort(arr, n);
    printArray(arr, n);
}