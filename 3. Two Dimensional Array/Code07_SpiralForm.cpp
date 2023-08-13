#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    int minr = 0;
    int minc = 0;
    int maxr = 3;
    int maxc = 4;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    while (minr <= maxr && minc <= maxc)
    {
        // right
        for (int j = minc; j <= maxc; j++)
        {
            cout << arr[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;

        // down
        for (int j = minr; j <= maxr; j++)
        {
            cout << arr[j][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;

        // left
        for (int j = maxc; j >= minc; j--)
        {
            cout << arr[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;

        // up
        for (int j = maxr; j >= minr; j--)
        {
            cout << arr[j][minc] << " ";
        }
        minc++;
    }
}
