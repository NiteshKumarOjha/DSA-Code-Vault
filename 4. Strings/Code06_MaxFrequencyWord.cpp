// Write a program that takes a sentence as input and processes it to find the most frequent word(s) in the sentence.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    sort(v.begin(), v.end());

    int count = 1;
    int maxCount = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxCount = max(count, maxCount);
    }

    cout << maxCount << endl;
    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (count == maxCount)
            cout << v[i] << " ";
    }
}
