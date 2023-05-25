#include<bits/stdc++.h>
using namespace std;
//Efficient Solution
//printing in Sorted order
void Divisors(int n)
{
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }

    if(i-(n/i)==1)
        i--;

    for( ; i>=1; i--)
    {
        if(n%i == 0)
        {
            cout<<(n/i)<<" ";
        }
    }

}
int main()
{
    int n;
    cin>>n;
    Divisors(n);
}

//Time Complexity = Theta of Square root of n
