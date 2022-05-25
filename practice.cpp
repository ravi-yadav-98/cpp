//Practice question on different topics
#include <iostream>
using namespace std;

//Conditional statements in cpp
//Problem: 01--> find the max number from three input number'

void getMaxOfThree()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
        cout<<a<<endl;
        }
        else{
        cout<<c<<endl;
        }
    }
    else{
    if(b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
    }
}

//problem: 02 Check for vowel or consonant:

void checkVowel()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter an alphabet: ";
    cin >> c;

    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";
}

++++++
int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif


  //call and run user defined functions

//   getMaxOfThree();
    checkVowel();
  return 0;
}