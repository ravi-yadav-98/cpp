#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Character Array And Strings
    - string: 1-D char Array
    - char: can store only single char
    - null character added at last of string as terminater
    - 

*/

//code to find length of string
int getLength(char strg[])
{
    int cnt =0, i=0;
    while(strg[i] != '\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}

//reverse string
void reverse(char name[], int n)
{
    int s=0;
    int e = n-1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }

}

int main(void)
{
    // char c = 'A';
    char name[10];
    cout<<"Enter your name: ";
    cin>>name;
    //cin-> stop execution when space, tab or new line is found

    //add null char \0
    // name[2] = '\0';
    // cout<<"Your name is: "<<name<<endl;
    // cout<<"length of name: "<<getLength(name)<<endl;;
    // //reverse
    // reverse(name, getLength(name));
    // cout <<"Reverse Name: "<< name<<endl;

    cout<<"Check palindrome: "<<checkPalindrome(name, getLength(name))<<endl;





  return 0;
}