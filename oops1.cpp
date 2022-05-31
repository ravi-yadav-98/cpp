// OOPs: class and Object
// C++ -->initially called -->Cwith classes by stroustroup
//  class -->extension of structures(inC)
//  structures had limitations
//  -->members are public
// 1-->No methods
//  classes -->structures+more
//  classes -->can have methods and properties
//  classses -->can make few members as private&few as public
//  structures inC++ are typedefed
//  you can declare objects along with the class declarion like this:
/*class Employee{
     // Class definition
 }harry,rohan,lovish;*/
// harry.salary=8makes no sense if salary is private

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // declearation
    void getData()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
        cout << "Value of c is: " << c << endl;
        cout << "Value of d is: " << d << endl;
        cout << "Value of e is: " << e << endl;
    }
};
void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// binary class

class binary
{
    //private--by default
    string s;
    void chk_bin(void);

public:
    void read(void);

    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {

            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

// driver function
int main(void)
{
    // Employee ravi;
    // ravi.d = 100;
    // ravi.e = 101;
    // // ravi.a = 404; //can not be changed as it is private variable
    // ravi.setData(1,2,3);
    // ravi.getData();
    binary bin;
    bin.read();
    // bin.chk_bin();
    bin.display();
    bin.ones_complement();
    bin.display();
    return 0;
}