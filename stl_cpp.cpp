#include <iostream>
// #include <bits/stdc++.h>
#include<array>
#include<vector>
using namespace std;

//STL in C++
/*
Standard Template Library
1. Containers
2. Algorithms
1. Containers: pre-built data structures
 a. Sequence Containers: Array, Vector, Deque List, forward_list
 b. Container Adaptors: stack, Queue, Priority Queue
 c. Associative containers: Set, Map, Multiset, multi map
 d: Unordered Associative: unordered set, unordered map, unordered multiset, unordered multimap

2. Algprithms
 a. Binary Search, Lower/Upper Bound, min/max, sort/swap, reverse/rotate etc
*/

//Array
void Array(void)
{
    array<int,7>  arr = {1,2,3,4,5,6,7};
    // for(int i=0;i<=arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<"4th element: "<<arr.at(3)<<endl;
    cout<<"is empty: "<<arr.empty()<<endl;
    cout<<"first  element: "<<arr.front()<<endl;
    cout<<"last  element: "<<arr.back()<<endl;

}

void Vector()
{
    // dynamic array: create new array of size twice(of old) when older arry is filled
    //size can be enlarged or shrinked
    /*
    size and capacity of vector
    1. size : number of elements in vector at any time
    2. number of element a vector can store any time (Total memory assigned)
    Capacity > = size
    */

    vector<int> v;

    // cout<<"Capacity--> "<<v.capacity()<<endl; //0
    // cout<<"size--> "<<v.size()<<endl;   //0

    // v.push_back(10);
    // v.push_back(11);
    // v.push_back(12);
    // v.push_back(14);
    // v.push_back(18);

    // cout<<"Capacity--> "<<v.capacity()<<endl; //8
    // cout<<"size--> "<<v.size()<<endl;  //4

    // cout<<"first element "<<v.front()<<endl;
    // cout<<"last element "<<v.back()<<endl;

    //print vector
    // cout<<"Before pop_back();"<<endl;
    // for(int i:v){
    //     cout<<i<<"  ";
    // }cout<<endl;

    // //delete element from end pop_back()
    // v.pop_back();

    // cout<<"After pop_back();"<<endl;
    // for(int i:v){
    //     cout<<i<<"  ";
    // }cout<<endl;

    //clear a vector (size -->0 not capacity )
    // v.clear();
    // cout<<"size after clearing: "<<v.size()<<endl;
    // cout<<"Capacity after clearing: "<<v.capacity()<<endl;

    vector<int> a(5,1); //vector of size 5 , each element initialized 1
    cout<<"printing vector a"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

    //copy one vector to another
    vector<int> b(a);
    cout<<"Vector b copied from a "<<endl;
    for(int i:b)
    {
        cout<<i<<" ";
    }cout<<endl;




}
//driver function
int main()
{
    // Array();
    Vector();
    return 0;
}

