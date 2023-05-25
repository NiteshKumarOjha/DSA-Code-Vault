#include<bits/stdc++.h>
using namespace std;
//Efficient Solution
//printing in Unsorted order
void Divisors(int n)
{
    for(int i=1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
            if(i != n/i) //for situation like perfect sqaure
            {
                cout<<(n/i)<<" ";
            }
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