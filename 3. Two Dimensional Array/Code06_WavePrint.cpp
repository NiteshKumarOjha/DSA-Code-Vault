#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}
