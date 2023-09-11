/* You are given a string s. 
  Your task is to determine whether it is possible to make s a palindrome by deleting at most one character. 
  You need to return true if it is possible, and false otherwise. */

// Leetcode - Valid Palindrome II

#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }

        else
        {
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
    }
    return true;
}

int main()
{
    string s = "abca";
    if (validPalindrome(s))
        cout << "true";
    else
        cout << "False";
}
