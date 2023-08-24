// Write a program that compares two input strings and determines if they are the same or not. 

#include <bits/stdc++.h>
using namespace std;
bool compare2strings(string s, string t)
{
    int len1 = s.size();
    int len2 = t.size();
    if (len1 != len2)
        return false;
    for (int i = 0; i < len1; i++)
    {
        if (s[i] != t[i])
            return false;
    }
    return true;
}

int main()
{
    string s;
    string t;
    getline(cin, s);
    getline(cin, t);
    if (compare2strings(s, t))
        cout << "Both are same";
    else
        cout << "Not same";
}
