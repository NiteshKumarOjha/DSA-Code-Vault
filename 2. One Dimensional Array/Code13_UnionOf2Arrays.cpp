#include <bits/stdc++.h>
using namespace std;

vector<int> unio(vector<int> &a, vector<int> &b)
{
    vector<int> uni;

    for (int i = 0; i < a.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < uni.size(); j++)
        {
            if (a[i] == uni[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            uni.push_back(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        int flag = 0;
        for (int j = 0; j < uni.size(); j++)
        {
            if (b[i] == uni[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            uni.push_back(b[i]);
    }
    return uni;
}

int main()
{
    vector<int> array_A = {1, 2, 3, 3, 5, 6};
    vector<int> array_B = {1, 2, 5, 8, 10};

    vector<int> result = unio(array_A, array_B);

    cout << "union Array: ";
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
}
