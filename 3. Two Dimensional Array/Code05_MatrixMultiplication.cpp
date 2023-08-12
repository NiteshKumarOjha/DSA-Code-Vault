#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 2;
    int n = 3;

    int p = 3;
    int q = 2;

    if (n == p)
    {
        int a[m][n] = {{1, 2, 3}, {4, 5, 6}};
        int b[p][q] = {{10, 11}, {20, 21}, {30, 31}};
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    res[i][j] = res[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
    {
        cout << "Matrix Multiplication Not Possible";
    }
}
