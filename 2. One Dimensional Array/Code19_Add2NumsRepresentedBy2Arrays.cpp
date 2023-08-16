/*
  Problem Statement: Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. 
  Calculate the sum of the numbers represented by these arrays. The result is returned as a string.
*/

#include <bits/stdc++.h>
using namespace std;

string calc_Sum(int *a, int n, int *b, int m)
{
    int i = n - 1;
    int j = m - 1;
    string ans;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int x = a[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }

    while (j >= 0)
    {
        int x = 0 + b[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }

    if (carry)
    {
        ans.push_back(carry + '0');
    }

    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int a[] = {9, 5, 4, 9};
    int b[] = {2, 1, 4};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    string s = calc_Sum(a, n, b, m);
    cout << s;
}
