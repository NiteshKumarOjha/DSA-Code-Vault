#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[2][3], int t[3][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            t[i][j] = arr[j][i];
        }
    }
}
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int t[3][2];
    transpose(arr, t);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
