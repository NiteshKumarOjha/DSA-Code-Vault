// Trapping Rain Water
// Leetcode 42

#include<bits/stdc++.h>
using namespace std;
long long trappingWater(vector<int> height){

    int n = height.size();
    int arr[n];

    arr[0]=-1;
    int max = height[0];
    for(int i=1; i<n; i++)
    {
        arr[i] = max;
        if(max<height[i])
            max = height[i];
    }

    max = height[n-1];
    for(int i = n-2; i>=0; i--)
    {
        if(arr[i]>max)
            arr[i] = max;
        if(max<height[i])
            max = height[i];
    }

    long long water = 0;
    for(int i=1; i<n-1; i++)
    {
        if(height[i]<arr[i])
            water += (arr[i] - height[i]);
    }
    return water;
}

int main()
{
  vector<int> height;
  height.push_back(3);
  height.push_back(0);
  height.push_back(0);
  height.push_back(2);
  height.push_back(0);
  height.push_back(4);
  cout<<trappingWater(height);
}