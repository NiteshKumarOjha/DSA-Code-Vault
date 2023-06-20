// Brute Force
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, 4, 6, 8, 10};
  int n = sizeof(arr) / sizeof(int);

  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int currSum = 0;
      for (int k = i; k <= j; k++)
      {
        currSum += arr[k];
      }
      if (currSum > maxSum)
      {
        maxSum = currSum;
      }
    }
  }
  cout << "Max Subarray Sum = " << maxSum;
}