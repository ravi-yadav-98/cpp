#include<iostream>
using namespace std;

//print Fibenacci Sequence till n

void printFibenacci(int n)
{
    int t1 =0;
    int t2 = 1;
    int nextTerm;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<", ";
        nextTerm = t1+t2;
        t1= t2;
        t2 = nextTerm;
    }
    return;
}

//Pascal Triangle
void pascalTriangle()
{

}
//drivers function
int main()
{
    printFibenacci(10);
    return 0;
}