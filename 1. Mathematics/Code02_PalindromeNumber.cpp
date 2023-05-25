#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0;
    int temp=n;
    while (temp > 0)
    {
        int a = temp % 10;
        rev = rev * 10 + a;
        temp /= 10;
    }
    
    if (rev == n)
        cout << "Yes";
    else
        cout << "No";
}