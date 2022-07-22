#include <bits/stdc++.h>
//include extrenal class
// #include "Hero.cpp"
using namespace std;
/*
C++ OOPs
Class, Object, Properties, behavior
*/

class Hero
{
    //properties
    private:
    int health;
    public:
    char level;
    char *name;
    
    //Non parameterized constructor
    Hero()
    {
        cout<<"Object created: "<<endl;
        name = new char[100];
    }
    // Parameterzed constructor
    Hero(int health){
        //pass data to object using this
        //this-> a pointer that points to current object
        cout<<"This val: "<< this << endl;
        this -> health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    //copy constructor--> shallow
    // Hero(Hero &temp){
    //     cout<<"copy Constructor called !"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    
    
    //copy constructor--> Deep
    Hero(Hero &temp)
    {
        //create new array then copy
        char *ch = new char[strlen(temp.name) +1];
        strcpy(ch, temp.name);
        this->name = ch;
    }
    void print()
    {
        cout<<endl;
        cout<<"[ Name: "<<this->name<<", ";
        cout<<"health: " << this->health<<", ";
        cout<<"Level: " << this->level<<" ]";
    }

    int getHealth()
    {
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    //destructor
    ~Hero(){
        cout<<"Destructor Called !!"<<endl;
    }
};



int main(void)
{
    

    Hero h1;
    Hero *h2 = new Hero;
    delete h2;
    // Hero h1;
    // h1.setHealth(12);
    // h1.setLevel('D');
    // char name[5] = "Ravi";
    // h1.setName(name);
    // h1.print();

    //copy constructor
    // Hero h2(h1);
    //or
    // Hero h2 = h1;
    // h1.name[0] = 'K';
    
    // h1.print();
    //  h2.print();
    
    



    
    // Hero A(70, 'C');
    // //copy constructor (default)
    // Hero B(A);
    // A.print();
    // B.print();

    







    
    
    
    
    
    
    
    
    //creation of object
    // Hero h1;
    // cout<<"health: "<<h1.getHealth();
    // cout<<"Size: " << sizeof(h1) << endl;
    // Hero *h1 = new Hero;
    // h1->setHealth(40);
    // h1->setLevel('A');
    // cout << "Health: "<< h1->getHealth()<<endl;
    // cout << "Level: " <<h1->getLevel()<<endl;

    //object created statically
    // Hero ramesh(10, 'A');
    // cout<<ramesh.getHealth()<<endl;
    // cout<<ramesh.level<<endl;


  return 0;
}