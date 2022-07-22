#include <bits/stdc++.h>
using namespace std;
/*
C++ OOps --> Intermediate Level: 
Static Keyword

static memeber
static function
*/
class Hero
{
    //properties
    private:
    int health;
    public:
    char level;
    static int timeToComplete; 


    Hero(){
        cout<<"Simple Constructor called !"<<endl;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    static int staticFun()
    {
        return timeToComplete;
    } 

    void print()
    {
        cout<<"Level: "<<this->level<<endl;
        cout<<"Health: "<<this->health<<endl;


    }


};
int Hero :: timeToComplete = 10;

int main(void)
{


    //static function

   cout<<  Hero::staticFun();
    //static members
    // cout<<"Static Member: "<<Hero::timeToComplete <<endl;
    // Hero a;
    // cout<<a.timeToComplete;
  return 0;
}