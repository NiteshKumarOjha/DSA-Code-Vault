#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n>0)
    {
        n/=10;
        c++;        
    }
    cout<<c;
}