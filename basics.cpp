#include <iostream>
using namespace std;

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

}


int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

 dataTypes();
  return 0;
}


