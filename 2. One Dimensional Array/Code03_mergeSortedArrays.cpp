// Merge two sorted arrays 

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1;
    int j = n-1;
    int k = (m+n)-1;
    while(i>=0 && j>=0)
    {
        if(nums1[i]>nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    if(i== -1)
    {
        while(j>=0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    if(j== -1)
    {
        while(i>=0)
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
    }
}

int main()
{
    vector<int> v1(3+5);
    v1[0] = 1;
    v1[1] = 3;
    v1[2] = 5;
    for(int i=0; i<3; i++)
    {
    cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    for(int i=0; i<5; i++)
    {
    cout<<v2[i]<<" ";
    }
    cout<<endl;
    merge(v1,3,v2,5);
    for(int i=0; i<8; i++)
    {
    cout<<v1[i]<<" ";
    }

}

