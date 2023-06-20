// Find the next permutations of Array 
// Note :- If not possible then print the sorted order in ascending order.
//(Leetcode 31)

#include<bits/stdc++.h>
using namespace std;    
void nextPermutation(vector<int>& nums) {
        
    int idx = -1;
    int n = nums.size();
    for(int i=n-2; i>=0; i--)
    {
        if(nums[i]<nums[i+1])
        {
            idx = i;
            break;
        }
    }
    if(idx==-1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }
    reverse(nums.begin()+idx+1,nums.end());
    //instead of nums.end(), another way is nums.begin()+n
    for(int i=idx+1; i<n; i++)
    {
        if(nums[idx]<nums[i])
        {
            int temp = nums[idx];
            nums[idx] = nums[i];
            nums[i] = temp;
            break;
        }
    }
    return;
}

int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(2);

  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  nextPermutation(v);
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}