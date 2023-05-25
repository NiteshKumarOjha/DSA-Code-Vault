#include<bits/stdc++.h>
using namespace std;

    //Naive Solution

    // int a,b;
    // cin>>a>>b;
    // int res = min(a,b);
    // for(int i=res; i>=1; i--)
    // {
    //     if(a%i == 0 && b%i==0)
    //     {
    //         res = i;
    //         break;
    //     }
    // }
    // cout<<res;


    //Efficient Solution (Basic Euclid Algorithm)
    // int a,b,gcd;
    // cin>>a>>b;
    // while(a!=b)
    // {
    //     if(a>b)
    //         a = a-b;
    //     else
    //         b = b-a;
    // }
    // gcd = a;
    // cout<<gcd;
    
//Optimised Solution (Euclid Algorithm)
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    
}