#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print Fibenacci Sequence till n

void printFibenacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << ", ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

// factorial of a number

int factorial(int num)
{
    int fact = 1;
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}

// calculate nCr
int nCr(int n, int r)
{

    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

// Pascal Triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
void pascalTriangle(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

// sum of natural n numbers
void sumOfNaturalNumbers(void)
{
    int maxNum;
    cin >> maxNum;
    int sum = 0;
    for (int num = 1; num <= maxNum; num++)
    {
        sum += num;
    }
    cout << "sum of numbers: " << sum;
}

// check for pythagorian triplet
bool checkPythagorianTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//conversions
//binary to Decimal
int binaryToDecimal(int binNum)
{
    int ans=0;
    int mul=1;
    while(binNum>0)
    {
        int rem = binNum%10;
        ans += mul*rem;
        mul *=2;
        binNum /= 10;

    }
    return ans;
}

//octal to Decimal
int octalToDecimal(int octNum)
{
    int ans=0;
    int mul=1;
    while(octNum>0)
    {
        int rem = octNum%10;
        ans += mul*rem;
        mul *=8;
        octNum /= 10;
    }
    return ans;
}

//Heax Decimal to Decimal
int hexaToDecimal(string hexNum)
{
    int ans=0;
    int mul=1;
    int s = hexNum.size();

    for(int i=s-1;i>=0;i--)
    {
        if (hexNum[i] >= '0' && hexNum[i] <= '9')
        {
            ans += mul*(hexNum[i]-'0');
        }
        else if(hexNum[i] >= 'A' && hexNum[i] <= 'F')
        {
            ans += mul*(hexNum[i] - 'A' + 10);
        }
        mul *= 16;
    }
    return ans;
}

//Decimal to binary
int decimalToBinary(int n)
{
    int x =1;
    int ans =0;
    while(x<=n)
        x *=2;
    x/=2;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

//Decimal to octal
int decimalToOctal(int n)
{
    int x =1;
    int ans =0;
    while(x<=n)
        x *=8;
    x/=8;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

//Decimal to hexa Decimal
string decimalToHexa(int n)
{
    int x =1;
    string ans ="";
    while(x<=n)
        x *=16;
    x/=16;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;
        if(lastDigit <=9)
        {
            ans = ans+ to_string(lastDigit);
        }
        else
        {
             char C = 'A' + lastDigit -10;
            ans.push_back(C);
        }


    }
    return ans;
}


// drivers function
int main()
{
    int n;
    cin>>n;
    cout<<decimalToHexa(n)<<endl;

    return 0;
}