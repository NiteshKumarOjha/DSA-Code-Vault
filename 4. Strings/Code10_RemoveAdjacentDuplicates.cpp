/* You are given a string s containing lowercase English letters. 
  Your task is to remove adjacent duplicate characters from the string repeatedly until no such adjacent duplicates exist, and return the final modified string. */

// Leetcode - Remove All Adjacent Duplicates In String

#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (res.length() > 0)
        {
            if (res[res.length() - 1] == s[i])
                res.pop_back();
            else
                res.push_back(s[i]);
        }
        else
            res.push_back(s[i]);
    }
    return res;
}

int main()
{
    string s = "abbaca";
    cout << removeDuplicates(s);
}
