/* Write a function that takes a vector of strings as input and determines the maximum value based on a specific rule. 
The function should iterate through the vector's strings, count the number of numeric characters in each string, 
and then either consider the string as an integer or use its length, depending on whether it consists only of numeric characters or not. 
The function should return the maximum value obtained from this process. */

// LeetCode - Maximum Value of a String in an Array

#include <bits/stdc++.h>
using namespace std;

int maximumValue(vector<string> &strs)
{
    int maxV = INT_MIN;
    for (int i = 0; i < strs.size(); i++)
    {
        int count = 0;
        int c = 0;
        for (int j = 0; j < strs[i].length(); j++)
        {

            if (int(strs[i][j]) >= 48 && strs[i][j] <= 57)
            {
                c++;
            }
        }
        if (c == strs[i].length())
        {
            count = stoll(strs[i]);
        }
        else
        {
            count = strs[i].length();
        }
        maxV = max(maxV, count);
    }
    return maxV;
}

int main()
{
    vector<string> s = {"alic3", "bob", "3", "4", "00000"};
    cout << "Max Value: " << maximumValue(s);
}
