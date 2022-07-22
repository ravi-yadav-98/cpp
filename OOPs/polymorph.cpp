#include <bits/stdc++.h>
using namespace std;


//Polymorphism
//1. Function Overloading
class A{
    public:
    void sayHello(){
        cout<<"Hello Ravi"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};



//2. Operator overloading
class B {
    public:
    int a;
    int b;

    public:
    int add()
    {
        return  a + b;
    }

    void operator+(B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"outout "<<value2 -value1 <<endl;
    }
    void operator() (){
        cout<<"main braket hu! "<<this->a <<endl;
    }
};


//Runtime Polymorphism: Method Overidning
class Animal {
    public:
    void speak(){
        cout<<"Speaking!!!"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};


int main(void)
{


    Dog d;
    d.speak();
    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;
    // // obj1 +obj2;
    // obj1();
    return 0;
}