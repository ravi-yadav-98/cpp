#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> a)
{
    for(auto i:a)
    {
        cout<<i<<" ";
    }cout<<endl;
}

int removeElement(vector<int> &nums, int val)
{
    int s = 0;
    int e = nums.size() - 1;
    int cnt = 0;
    while (s <= e)
    {
        if (nums[s] == val && nums[e] != val)
        {
            swap(nums[s], nums[e]);
            s++;
            e--;
            cnt++;
        }
        if (nums[s] == val && nums[e] == val)
        {
            e--;
            cnt++;
        }

        if (nums[s] != val && nums[e] != val)
        {
            s++;
        }

        if (nums[s] != val && nums[e] == val)
        {
            s++;
        }
        // print(nums);
    }
    return cnt;
}
//driver function
int main(void)
{
    vector<int> test = {0,1,2,2,3,0,4,2};
    int cnt = removeElement(test, 2);
    cout<<"Total occurance of 2 is: "<<cnt<<endl;
    //print vector
    print(test);
    
  return 0;
}