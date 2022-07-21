#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

/*
Algorithms in C++ STL
    - Binary Search: (sorted array)

*/

int main(void)
{
    // create a vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // binary search for some element--> O(log(n))
    //  cout<<"Binary Search: "<<binary_search(v.begin(),v.end(), 5)<<endl;;
    //  cout<<"lower bound: "<<lower_bound(v.begin(),v.end(), 5)-v.begin();

    // max of two number
    /*
    int a = 3;
    int b = 5;
    cout<<"MAX of two Number a and b-> "<<max(a, b)<<endl;
    cout<<"min of two Number a and b-> "<<min(a, b)<<endl;

    swap(a, b);
    cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
    */

    // reverse string
    //     string s = "abcdef";
    //      cout<<"original string -> "<<s<<endl;
    //     reverse(s.begin(), s.end());
    //     cout<<"Reverse string -> "<<s<<endl;

    // Rotate
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Rotated Vector: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sort--> Intro sort (quick sort, insertion sort and heap sort )
    sort(v.begin(), v.end());
    cout << "after sorting: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}