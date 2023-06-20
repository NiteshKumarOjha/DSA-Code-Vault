// Prefix Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, 4, 6, 8, 10};
  int n = sizeof(arr) / sizeof(int);
  int prefix[n];
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    int currSum = 0;
    for (int j = i; j < n; j++)
    {
      if (i == 0)
        currSum = prefix[j];
      else
        currSum = prefix[j] - prefix[i - 1];
    }
    if (currSum > maxSum)
      maxSum = currSum;
  }
  cout << "Max Subarray Sum = " << maxSum;
}