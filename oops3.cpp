#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// friend function
// Compiler does not allow to access any private data of any class by other function
//  Friend is a way to access private data by other function
/* Properties:
1. Not in the scope of class
2. since it is not in the scope of the class,it cannot be called from the object of
that class.c1.sumComplex()== Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by thein names and need object_name.member_name
to access any member.
*/
class Complex
{
    int a;
    int b;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
    friend Complex sumComplex(Complex o1, Complex o2); // access private data by other function
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(void)
{
    Complex c1, c2;
    c1.setNumber(1, 2);
    c2.setNumber(5, 8);
    // c1.printNumber();
    Complex sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}