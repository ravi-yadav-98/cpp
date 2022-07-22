#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Sieve of Eratosthenes:
 - n(log(logn))

*/
void sieveOfEratosthenes(int n)
{
    if (n < 0)
    {
        return;
    }
    // create a vector of len 2 to n and fill all true --> size n+1
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = (long long)i * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }
}
// ImrpovementL:01: Sieving till root (check only till sqrt(n), i*i<=n)

void sieveOfEratosthenesM1(int n)
{
    // create a vector of len 2 to n and fill all true --> size n+1
    if (n < 0)
    {
        return;
    }
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = (long long)i * i; j <= n; j = j + i)
            {
                isprime[j] = false;
            }
        }
    }

    // prime remaining prime numbers
    for (int i = 0; i < isprime.size(); i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}



//Segmented Sieve

int main(void)
{
    int n;
    cin >> n;
    cout << "Prime Numbers:" << endl;
    // sieveOfEratosthenes(n);

    // modification:01 i*i<n
    sieveOfEratosthenesM1(n);
    return 0;
}