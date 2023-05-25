#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // int fact =1;
    // if(n==0 or n==1)
    //     fact = 1;
    // else
    // {
    //     for(int i=1; i<=n; i++)
    //     {
    //         fact*=i;
    //     }
    // }
    // cout<<fact;

    // int c=0;
    // while(fact%10==0)
    // {
    //     c++;
    //     fact = fact/10;
    // }
    // cout<<endl<<c;

    int n;
    cin>>n;
    int res = 0;
    for(int i=5; i<=n; i=i*5)
        res = res + n/i;
    cout<<res;
}