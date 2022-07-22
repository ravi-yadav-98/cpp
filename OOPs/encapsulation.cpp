#include <bits/stdc++.h>
using namespace std;


class Student{

    //Encapsulation
    private:
        string name;
        int age;
        int height;

    public:
    int getAge()
    {
        return this->age;
    }
};
int main(void)
{
    Student s1;
    cout<<s1.getAge();
  return 0;
}