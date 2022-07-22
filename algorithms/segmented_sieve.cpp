#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<long long> prime;
//simple Sieve
void sieve(int n)
{
    vector<bool> isprime(n+1, true);
    for(long long i=2; i<=n;i++)
    {
        if(isprime[i])
        {
            prime.push_back(i);
            for(long long j =i*i;j<=n;j=j+i)
            isprime[j] = false;
        }
    }
}
//Segmented Sieve
void segmentedSieve(int l, int h)
{
    //verify values of l and h
    if (l<0 || h<0)
    {
        return;
    }
    else if (l==0|| l==1)
    {
        l =2;
    }
    else
    {
        l =l;
    }
    long long sq = sqrt(h);
    sieve(sq);
    vector<bool> isprime(h-l+1, true);
    for(long long p: prime)
    {
        long long sm = (l/p)*p;
        if(sm<=1)
        {
            sm = p+p;
        }
        else if(sm%p)
        {
            sm = (sm*p) +p;
        }
        else
        {
            sm+=p;
        }
        for(long long m = sm; m<=h;m+=p)
        {
            isprime[m-l] = false;

        }
    }
    for(long long i=l;i<=h;i++)
    {
        if(isprime[i-l] ==  true)
        {
            cout<<i<<" ";
        }

    }

}



int main(void)
{
    int l, h;
    cin>>l>>h;
    segmentedSieve(l,h);
  return 0;
}