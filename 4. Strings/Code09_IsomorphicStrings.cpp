/* Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t. */

// Leetcode - Isomorphic Strings

#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;
    vector<int> v(150, 500);
    for (int i = 0; i < s.size(); i++)
    {
        int index = char(s[i]);
        if (v[index] == 500)
            v[index] = s[i] - t[i];
        else if (v[index] != s[i] - t[i])
            return false;
    }
    for (int i = 0; i < 150; i++)
    {
        v[i] = 500;
    }
    for (int i = 0; i < s.size(); i++)
    {
        int index = char(t[i]);
        if (v[index] == 500)
            v[index] = t[i] - s[i];
        else if (v[index] != t[i] - s[i])
            return false;
    }
    return true;
}

int main()
{
    string s1 = "paper";
    string s2 = "title";
    if (isIsomorphic(s1, s2))
        cout << "True";
    else
        cout << "False";
}
