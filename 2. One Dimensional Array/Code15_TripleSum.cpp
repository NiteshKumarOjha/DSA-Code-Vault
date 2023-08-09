//Problem Statement: Find Triplets with Given Sum 
//You are given an array of integers a and an integer sum. 
//Your task is to implement a function tripleSum that finds and prints all unique triplets of integers from the array that sum up to the given value sum.

#include <bits/stdc++.h>
using namespace std;

void tripleSum(vector<int> a, int sum)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                if (a[i] + a[j] + a[k] == sum)
                    cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")" << endl;
            }
        }
    }
}

int main()
{
    vector<int> a = {10, 20, 30, 40};
    int sum = 80;
    tripleSum(a, sum);
}
