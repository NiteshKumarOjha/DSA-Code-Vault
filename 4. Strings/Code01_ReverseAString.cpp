// Write a C++ program that takes a string as input and reverses it.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    int length = name.size();
    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
    cout << name;
}
