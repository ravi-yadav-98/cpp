#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Two Dimension Array in C++
-  arr[row][colomn]
- strored similar to 1D array
- stored contigious in memory: row by row
-  position = col*i + j (i, j are row col)
-  default rowise storage
- must give col  while passing an 2d array to function
*/
bool isPresent(int arr[][4],int target, int row, int col )
{
    for(int row=0; row<3;row++)
    {
        for(int col =0;col<4;col++)
        {
            if(arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;


}

//function to get rowvise sum
void rowviseSum(int arr[][4], int row, int col)
{
    for(int row=0; row<3;row++)
    {
        int sum =0;
        for(int col =0;col<4;col++)
        {
          sum += arr[row][col];
        }
        cout<<sum<<endl;;
    }

}

//largest row sum -get row number and val

void largestRowSum(int arr[][4], int row, int col)
{   int maxi = INT_MIN;
int row_idx = -1;
    for(int row=0; row<3;row++)
    {
        int sum =0;
        for(int col =0;col<4;col++)
        {
          sum += arr[row][col];
        }
        if(sum>maxi)
        {
            maxi = sum;
            row_idx = row;
        }
    }
    cout<<"The maximum sum row no: "<<row_idx<<" and Sum is: "<< maxi<<endl;

}


//search in 2 D matrix - binary Search
/*
 Sorted Rows
 size = row*col-1;
 - Binary Search
*/

int main(void)
{
    //cerate 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //takes row

    // int arr[3][4] = {{1,2,3,4},
    //                 {6,7,8,9},
    //                 {0,22,12,23}};

    // cout<<sizeof(arr)<<endl;  //48
    //take user input
    //1. Row wise input
    /*
    for(int row=0; row<3;row++)
    {
        for(int col =0;col<4;col++)
        {
            cin >> arr[row][col];
        }
    }



    //1. col wise input
    for(int col=0; col<4;col++)
    {
        for(int row =0;row<3;row++)
        {
            cin >> arr[row][col];
        }
    }

    //print 2d array

    cout<<"output 2D array"<<endl;
    for(int row=0; row<3;row++)
    {
        for(int col =0;col<4;col++)
        {
            cout << arr[row][col]<<" ";
        }cout<<endl;
    }
    */
   /*
   int target;
   cout<<"Enter target: ";
   cin>>target;

   if(isPresent(arr, target, 3,4))
   {
    cout<<"target is present"<<endl;
   }
   else
   {
    cout<<"target is not present !"<<endl;
   }
   */

  //get row wise sum
//   rowviseSum(arr,3,4);
  largestRowSum(arr,3,4);


  return 0;
}