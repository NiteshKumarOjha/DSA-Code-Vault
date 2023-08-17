//WAP to find the largest three elements in the array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0; i<=n-1; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max =INT_MIN; 
    int sMax = INT_MIN;
    int tMax = INT_MIN;
    for(int i=0; i<=n-1; i++)
    {
        if(v[i]>max)
        {
        int temp = sMax;
        sMax = max;
        tMax = temp;
        max = v[i];
        }
        else if(v[i]>sMax && v[i]!=max)
        {
            tMax = sMax;
            sMax = v[i];
        }
        else if(v[i]>tMax && v[i]!= max && v[i]!= sMax)
        {
            tMax = v[i];
        }
    }
    cout<<"Max = "<<max<<endl;
    cout<<"Second Max = "<<sMax<<endl;
    cout<<"Third Max = "<<tMax<<endl;
    return 0;
}
