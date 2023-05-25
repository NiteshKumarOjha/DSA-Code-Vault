// Shorter Optimized Sieve

#include<bits/stdc++.h>
using namespace std;

void printPrimes(int n)
{
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
            for(int j=i*i; j<=n; j=j+i)
            {
                    isPrime[j]=false;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    printPrimes(n);
}