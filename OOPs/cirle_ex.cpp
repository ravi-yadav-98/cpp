#include <bits/stdc++.h>
using namespace std;
#define PI 3.14
/*
Circle as Class 

data Members: radius
function: perimeter
*/

class Circle
{
    public:
        double radius;
        //constructor
        Circle(double radius)
        {
            if(radius < 0)
            {
                throw invalid_argument("Radius must be positive real value !!");
            }
            else
            {
                this-> radius = radius;
            }
        }
        double getPerimeter()
        {
            return 2 * PI * radius;
        }

        double getArea()
        {
            return radius*radius;
        }


};
int main(void)
{
    double r;
    cin>>r;
    Circle c1(r);
    cout<<"Radius of Circle: "<<c1.radius<<endl;
    cout<<"Perimeter of Circle: "<<c1.getPerimeter()<<endl;
    cout<<"Area of Circle: "<<c1.getArea()<<endl;
  return 0;
}