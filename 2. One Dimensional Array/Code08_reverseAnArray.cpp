#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {1, 5, 2, 7, 8, 5, 3, 0, 10};
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }

  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}