#include<iostream>
using namespace std;
//inverted number pattern
void invertedPattern();
//ZeroOne Pattern
void zeroOnePattern();
//rhombus Pattern
void rhombusPattern();
//triangler number pattern
void trianglerNumberPattern();
//Palindromic Pattern
void palindromicPattern();
//start pattern
void starPattern();
//zig-zag pattern
void zigzagPattern();

int main()
{
    // invertedPattern();
    // zeroOnePattern();
    // rhombusPattern();
    // trianglerNumberPattern();
    // palindromicPattern();
    // starPattern();
    zigzagPattern();
    return 0;
}
//inverted Pattern
void invertedPattern()
{
    int row;
    cin>>row;
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//ZeroOne Pattern
void zeroOnePattern()
{
   int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
}

//rhombus Pattern
void rhombusPattern()
{
     int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {   //for space
        for(int j=1;j<=row-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=row;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

//triangler number pattern
void trianglerNumberPattern()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
       for(int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//Palindromic Pattern
void palindromicPattern()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
       for(int j=1;j<=row-i;j++)
        {
            cout<<"  ";
        }

        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }

        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//start pattern
void starPattern()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
       for(int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=row;i>=1;i--)
    {
       for(int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

//zig-zag pattern
void zigzagPattern()
{
    int n;
    cin>>n;
    int row =3;
    for(int i=1; i<=row;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if(((i+j)%4==0) || (i==2 && j%4==0))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
}