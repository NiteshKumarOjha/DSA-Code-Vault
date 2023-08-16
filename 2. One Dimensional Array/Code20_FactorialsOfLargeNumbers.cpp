/*
Given an integer n, find its factorial. 
Return a list of integers (in the form of a vector) denoting the digits that make up the factorial of n.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> factorial(int N)
{

    vector<int> v;
    v.push_back(1);
    int carry = 0;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            int x = v[j] * i + carry;
            v[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            v.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    int n = 100;
    vector<int> v;
    v = factorial(n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
