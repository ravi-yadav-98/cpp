#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Dynamic Memory Allocation for 2D array(Matrix)

c-like array (stack me store hota hai)
1D int arr[n];
2D int arr[n][m];


//dynamic array (heap)
/modify array in runtime
int arr* = new int[n];

2D:
int **arr = new int*[n]
- multiple array pointer (for each row 1 pointer)


*/
int main(void)
{
    // int n;
    int row, col;
    cout<<"Enter row and col:  ";
    cin>>row>>col;
    int **arr = new int*[row];

    for(int i=0; i<=row; i++)
    {
        arr[i] = new int[col];
    }

    //talk input
    cout<<" enter elements: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>> arr[i][j];
        }
    }
    cout<<endl;

    //output
    cout<<"output array: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;



    //release memory
    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;


  return 0;
}