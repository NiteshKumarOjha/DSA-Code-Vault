// Kadane Algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {-3, 7, -5, 10, -10};
  int n = sizeof(arr) / sizeof(int);
  int ms = INT_MIN;
  int cs = 0;
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= 0)
    {
      c++;
      break;
    }
    else if (arr[i] > ms)
      ms = arr[i];
  }

  if (c == 1)
  {
    ms = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      cs = cs + arr[i];
      if (cs < 0)
        cs = 0;
      if (cs > ms)
        ms = cs;
    }
  }

  cout << "Max Subarray Sum = " << ms;
}