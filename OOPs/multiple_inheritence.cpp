
#include <bits/stdc++.h>
using namespace std;


//2. Multi Level Inheritence

class Animal
{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking " <<endl;

    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking... "<<endl;
    }

};

//multiple inheritence

class Hybrid: public Animal, public Human{

};
int main(void)
{
    Hybrid h1;
    h1.bark();
    h1.speak();
  return 0;
}