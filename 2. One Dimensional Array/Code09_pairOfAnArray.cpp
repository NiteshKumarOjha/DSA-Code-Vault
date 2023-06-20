#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {2, 4, 6, 8, 10};
  int n = sizeof(arr) / sizeof(int);

  int tp = 0; // total pairs
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      cout << "(" << arr[i] << "," << arr[j] << ")"
           << " ";
      tp++;
    }
    cout << endl;
  }
  cout << "Total Pairs = " << tp;
}