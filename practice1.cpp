//Practice question on different topics
#include <iostream>
#include <cmath>
#include <math.h>
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

// Problem:05 Check if input number is prime or Not.
string checkPrime(int n){
    // int n;
    // cin>>n;
    int i;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return "Not Prime";
            break;
        }


    }
    if (i==n){
    }
    return "Prime";
}

// problem:06 Print all prime numbers between two input numbers

void printPimeNumber(int num1, int num2){
    // int num1, num2;
    // cin>>num1>>num2;
    for (int i=num1;i<num2;i++){
        if(checkPrime(i)=="Prime" && i!=1){
            cout<<i<<endl;
        }
        else{
            continue;
        }

    }

    }


//Switch statements
//Problem:07 Simple Calculator

void simpleCalculator(){
    int n1,n2;
    char op;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    cout<<"Enter operand: ";
    cin>>op;
    switch (op)
    {
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        case '%':
            cout<<n1%n2<<endl;
            break;
        default:
            cout<<"Operator not found!"<<endl;
            break;
    }
}


//problem:08 Reverse a Number
void reverseNumber()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int  reverseNum=0;
    while(num>0)
    {
        int lastDigit = num%10;
        reverseNum = reverseNum*10+lastDigit;
        num=num/10;

    }
    cout<<"Reverse Num: "<<reverseNum<<endl;

}

//Armstrong Number
void checkArmstrongNum()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum =0;
    int originalNum = num;
    while(num>0)
    {
        int lastDigit = num%10;
        sum+=pow(lastDigit,3);
        num = num/10;

        if (num < 1)
        {
            sum = sum + pow(1, 3);
        }

    }
    if(sum==originalNum)
    {
        cout<<"Armstring Number !"<<endl;
    }
    else
    {
        cout<<"Not a Armstring Number !"<<endl;
    }
}
// main function-->driver func
int main() {
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif


  //call and run user defined functions

//   getMaxOfThree();
    // checkVowel();
    // userInputCheck();
    // numberNotDivisibleBy3();
    // string x = checkPrime(11);
    // cout<<x<<endl;
    // printPimeNumber(1, 100);
    // simpleCalculator();
    // reverseNumber();
    checkArmstrongNum();
  return 0;
}