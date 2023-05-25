#include<bits/stdc++.h>
using namespace std;
//Naive Solution
void Divisors(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
            cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    Divisors(n);
}

//Time Complexity Theta(n)
//Auxiliary Space Complexity Theta(1)
