#include<bits/stdc++.h>
using namespace std;

int powers(int x, int n)
{
    if(n==0)
        return 1;
    int temp = powers(x,n/2);
    temp = temp*temp;
    if(n%2 == 0)
        return temp;
    else
        return temp*x;
}

int main()
{
    int x,n;
    cin>>x>>n;
    cout<<powers(x,n);
}