/* You are given a string s and a string part. 
  Your task is to repeatedly remove all occurrences of the part string from the s string until no more occurrences exist, and return the final modified string. */

// Leetcode - Remove All Occurrences of a Substring

#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.size());
        pos = s.find(part);
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurrences(s, part);
}
