#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function to convert lower case
char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp = ch-'A'+'a';
        return temp;
    }
}

//check palindromic

bool checkPalindrome(char s[], int n)
{
    int i =0;
    int e = n-1;
    while(i<e)
    {
        if(toLowerCase(s[i]) != toLowerCase(s[e]))
        {
            return false;
        }
        i++;
        e--;
    }
    return true;
}
int main(void)
{
    char s[10];
    cout<<"Enter any String: ";
    cin>>s;
    cout<<"Palindrome or Not "<<checkPalindrome(s, 4);
  return 0;
}