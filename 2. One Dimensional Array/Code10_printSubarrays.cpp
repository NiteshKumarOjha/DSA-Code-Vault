#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, 4, 6, 8, 10};
  int n = sizeof(arr) / sizeof(int);

  int ts = 0; // total subarrays
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << arr[k] << " ";
      }
      ts++;
      cout << endl;
    }
    cout << endl;
  }
  cout << "Total Subarrays = " << ts;
}