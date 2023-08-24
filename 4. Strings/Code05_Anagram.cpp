// Write a program that determines whether two input strings are anagrams of each other. 
// An anagram is a word or phrase formed by rearranging the letters of another, using all the original letters exactly once. 

//LeetCode - Valid Anagram

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
        return true;
    else
        return false;
}

int main()
{
    string s = "nagaram";
    string t = "anagram";
    if (isAnagram(s, t))
        cout << "Yes";
    else
        cout << "No";
}
