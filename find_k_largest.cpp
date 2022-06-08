// https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/
// // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int> res;
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        for(int j=0;j<k;j++)
        {
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends