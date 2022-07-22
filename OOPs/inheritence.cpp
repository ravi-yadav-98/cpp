#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//parent class
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

//child class

class Male: protected Human{
    public:
    string color;
    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};

//Types of Iheritence

//1. Single Inheritence
class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking ! "<<endl;
    }

};

class Dog: public Animal
{

};


//2. Multi Level Inheritence

class GermanShepherd: public Dog{

};
//Dog is inherited from Animal and GenmanShephar is from Dog


//3. Multi Inheritence

int main(void)
{


    GermanShepherd g;
    g.speak();
    // Male obj;
    // cout<<obj.age<<endl;
    // obj.setWeight(77);
    // cout<<obj.weight<<endl;
    // cout<<obj.height<<endl;
    // cout<<obj.color<<endl;
    // obj.sleep();
  return 0;
}