#include<bits/stdc++.h>
using namespace std;

int Powers(int x, int n)
{
    int res = 1;
    for(int i=0; i<n; i++)
    {
        res = res*x;
    }        
    return res;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<Powers(x,n);
}