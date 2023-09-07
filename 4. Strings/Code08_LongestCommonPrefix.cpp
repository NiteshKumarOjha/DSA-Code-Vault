/* Write a program to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "". */

// Leetcode - Longest Common Prefix

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    if (n == 1)
        return strs[0];

    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    string str = "";
    for (int i = 0; i < (min(first.size(), last.size())); i++)
    {
        if (first[i] == last[i])
        {
            str = str + first[i];
        }
        else
            return str;
    }
    return str;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(str);
}
