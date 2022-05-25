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


//Loops in Cpp
//3. Problem: Terminate program when user input any negative number

void userInputCheck()
{
    int n;
    cin>>n;
    // while(n>0)
    // {
    //     cout<<n<<endl;
    //     cin>>n;
    // }

    do{
        cout<<n<<endl;
        cin>>n;
    }
    while(n>0);
}

//jump loop:
//problem: 04 print numbers which are not divisible by 3

void numberNotDivisibleBy3(){
    int max;
    cin>>max;
    for (int i = 0;i<max;i++ ){
        if ( i%3 == 0 ) {
        continue ;
        }
        cout<<i<<endl;
    }
}

void checkPrime(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
           break;
        }

    if (i==n){
        cout<<"prime";
    }
    }
}


int main() {
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif


  //call and run user defined functions

//   getMaxOfThree();
    // checkVowel();
    // userInputCheck();
    numberNotDivisibleBy3();
  return 0;
}