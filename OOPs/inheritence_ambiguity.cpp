#include <bits/stdc++.h>
using namespace std;


class A{
    public:
    void func(){
        cout<<" I am A" <<endl;
    }
};


class B{
    public:
    void func(){
        cout<<" I am B" <<endl;
    }
};


class C: public A, public B{

};
int main(void)
{

    C obj;
    obj.A::func();  //call func from A
    obj.B::func();  //call func from A
  return 0;
}