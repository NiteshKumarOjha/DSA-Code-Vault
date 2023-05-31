#include<bits/stdc++.h>
using namespace std;
  int power(int x, int n)
  {
    int res = 1;
    while(n>0)
    {
      if(n%2==1) // if(n&1) optimized slightly by using bitwise operator 
        res = res*x;
      x=x*x;
      n=n/2; // n = n>>1 optimized slightly by using right sift operator 
    }
    return res;
  }
  
  int main()
  {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
  }