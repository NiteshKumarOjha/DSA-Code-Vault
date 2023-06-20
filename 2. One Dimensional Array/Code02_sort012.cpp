// Sort the array of 0’s , 1’s and 2’s (Dutch Flag Algorithm)

#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& v) {
        int size = v.size();
        int low = 0;
        int mid = 0;
        int high = size-1;
        while(mid<=high)
        {
            if(v[mid]==2)
            {
                int temp= v[mid];
                v[mid] = v[high];
                v[high] = temp;
                high--;
            }
            else if(v[mid]==0)
            {
                int temp= v[mid];
                v[mid] = v[low];
                v[low] = temp;
                low++;
                mid++;
            }
            else
            {
                mid++;
            }
        }
}
int main()
{
  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(2);
  v.push_back(2);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sortColors(v);
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}