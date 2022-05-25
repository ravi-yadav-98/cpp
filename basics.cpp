#include <iostream>
using namespace std;

//data types in cpp
void dataTypes(){
  int a ; // declaration
  a = 12 ; // initialisation
  cout << " size of int " << sizeof(a) << endl;
  float b ;
  cout << " size of float " << sizeof(b) << endl;
  char c;
  cout << " size of char " << sizeof(c) << endl;
  double d;
  cout << " size of double " << sizeof(d) << endl;
  bool e;
  cout << " size of bool " << sizeof(e) << endl;

  //type modifiers: modify length of datatypes: signed--> unsigned, long, short int
  short int si;
  long int li;
  cout << " size of short int " << sizeof(si) << endl;
  cout << " size of long int " << sizeof(li) << endl;


}

void inputOutput(){
  // include--> Preprocessor directive for including header files
  //<iostrem>--> header file for input output
  // main()--> execution of code begins from main
  // \n --> add line break
  // ; --> end of statement
  // return 0--> exit status of function
  // {}--> scope of function

  //std: namespace
  //<< insertion operator.


  // std::cout<<"Hello Ravi !! \n";

  int  num1, num2;
  cin>>num1;
  cin>>num2;
  int sum = num1+num2;
  cout<<"sum is: "<<sum<<endl;
}

//consitions in cpp--> if else, else if
void conditions(){
  int savings ;
  cin >> savings ;
  if ( savings > 5000 ) {
    if(savings>10000){
      cout <<"Roadtrip with neha\n";
    }
    else{
      cout <<"Shopping with neha\n";
    }

  }
  else if ( savings > 2000 ) {
  cout << " With Rashmi \n " ;
  }
  else {
  cout << " With Friends \n " ;
  }
}


// Loops in cpp
void runLoops()
{
  // use for repetition of any task
  //for loop, while loop
  //example: get sum of numbers till n
  int n;
  cin>>n;
  int sum =0;
  for(int iter=1;iter<=n;iter++)
  {
    sum = sum+iter;

  }
  cout<<sum;

}

//jumps in Loops

void jumpInLoop()
{
  //controls in loop--> break and continue
  //continue---> skip to the next iteration of the loop
  //break--> terminate the loop
  int pocketMoney;
  cin>>pocketMoney;
  for (int date=1 ; date<=30 ; date++ ) {
    if ( date % 2 == 0 ) {
      continue ;
    }
    if ( pocketMoney == 0 ) {
      break ;
    }
  cout << " Go out today ! " << endl ;
  pocketMoney - pocketMoney - 300 ;


  }
}


int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif


  //call and run user defined functions
  // dataTypes();
  // inputOutput();
  // conditions();
  // runLoops();
  jumpInLoop();
  return 0;
}


