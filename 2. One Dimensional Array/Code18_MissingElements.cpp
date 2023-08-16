/*
You are given an array of integers a[] containing n elements, where each element is in the range from 1 to n. 
However, the array is missing some elements. Your task is to find the missing elements. 
*/

#include <bits/stdc++.h>
using namespace std;

// visited method
void findMissing(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index - 1] > 0)
        {
            a[index - 1] *= -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            cout << i + 1 << " ";
    }
}

// sorting + swapping method
void sortSwap(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        int index = a[i] - 1;
        if (a[i] != a[index])
            swap(a[i], a[index]);
        else
            i++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
            cout << i + 1 << " ";
    }
}

int main()
{
    int n;
    int a[] = {1, 3, 3, 3, 4};
    n = sizeof(a) / sizeof(int);
    // findMissing(a, n);
    sortSwap(a, n);
    return 0;
}
