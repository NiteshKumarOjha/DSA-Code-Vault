#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b)
{
    vector<int> intersect;
    for (int i = 0; i < a.size(); i++)
    {
        bool found = false;

        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            bool alreadyAdded = false;
            for (int k = 0; k < intersect.size(); k++)
            {
                if (a[i] == intersect[k])
                {
                    alreadyAdded = true;
                    break;
                }
            }

            if (!alreadyAdded)
                // if element was already added => alreadyAdded = true
                // then "!" will make it false => this if conditon will not be executed
                // and the element  will not get added again
                intersect.push_back(a[i]);
        }
    }
    return intersect;
}

int main()
{
    vector<int> array_A = {1, 2, 2, 1, 3, 3, 10, 5};
    vector<int> array_B = {2, 2, 3, 5};

    vector<int> result = intersection(array_A, array_B);

    cout << "Intersection Array: ";
    for (size_t i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
}
