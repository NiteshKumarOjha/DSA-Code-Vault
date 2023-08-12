#include <bits/stdc++.h>
using namespace std;

void transpose(int arr[][3], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
                continue;
            else if (i < j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
}

void Cw90Rotate(int arr[][3], int row, int column)
{
    for (int k = 0; k < row; k++)
    {
        int i = 0;
        int j = row - 1;
        while (i < j)
        {
            swap(arr[k][i], arr[k][j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(arr, 3, 3);
    Cw90Rotate(arr, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
