#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row1 = 2;
    int col1 = 3;
    int row2 = 2;
    int col2 = 3;
    int arr[row1][col1] = {{1, 2, 3}, {4, 5, 6}};
    int brr[row2][col2] = {{7, 8, 9}, {10, 11, 12}};

    if (row1 != row2 || col1 != col2)
    {
        cout << "Matrix Addition not possible";
    }

    else
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                arr[i][j] += brr[i][j];
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}
