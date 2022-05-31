#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// memory allocation of  object in OOPs
/*
    - few part of memory is common for all objects of the class(common things for objects)
    - i.e. common member function

*/
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Proce of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << "is" << itemPrice[i] << endl;
    }
}

// array of objects

class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 122;
        cout << "Enter the id of employee ";
        cin >> id;
    }
    void getID(void)
    {
        cout << "The id of this employ is " << id << endl;
    }
};

// passing object as function argument
class complex
{
    int a;
    int b;

    public:
        void setNumber(int v1, int v2)
        {
            a = v1;
            b = v2;
        }
        void setDataBySum(complex o1, complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber()
        {
            cout << "Your complex number is " << a << " + " << b << "i" << endl;
        }
};
// driver function
int main(void)
{
    // Shop dukan;
    // dukan.initCounter();
    // dukan.setPrice();
    // dukan.setPrice();
    // dukan.setPrice();
    // // dukan.displayPrice();
    // Employee fb[4];  //similar to data types
    // for (int i=0;i<4;i++)
    // {
    //     fb[i].setID();
    //     fb[i].getID();

    // }
    complex c1;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}