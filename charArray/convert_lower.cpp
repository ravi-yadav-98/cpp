#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
convert any upper charcter to lower 
lower = a-z
upper = A-Z

Airthmetic: 
'B'-'A' = 1
'B'-'A'+'a' = 'b'
*/
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

//function to uppercase char
char toUpperCase(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        return ch;
    }
    else
    {
        char temp = ch-'a'+'A';
        return temp;
    }
}
int main(void)
{
    char a;
    cout<<"Enter an character: ";
    cin>>a;
    // cout<<"Lowercase character: "<<toLowerCase(a)<<endl;
    cout<<"Uppercase character: "<<toUpperCase(a)<<endl;
  return 0;
}