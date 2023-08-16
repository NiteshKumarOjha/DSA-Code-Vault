/* You are given an array of integers containing both positive and negative numbers. 
  Your task is to rearrange the elements of the array such that all the negative numbers are placed on the left side, 
  and all the positive numbers are placed on the right side of the array.
  The order of the elements within the positive and negative sections is not required to be maintained. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {-1, 5, 0, -7, 16};
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        if (arr[l] < 0)
            l++;
        else if (arr[h] >= 0)
            h--;
        else
        {
            swap(arr[l], arr[h]);
            l++;
            h--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
