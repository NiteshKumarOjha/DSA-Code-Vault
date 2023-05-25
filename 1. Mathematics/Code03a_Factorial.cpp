#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact =1;
    if(n==0 or n==1)
        fact = 1;
    else
    {
        for(int i=1; i<=n; i++)
        {
            fact*=i;
        }
    }
    cout<<fact;
}