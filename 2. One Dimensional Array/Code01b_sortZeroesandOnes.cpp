// Sort the array of 0’s and 1’s 

// Double Pointer Method
#include<bits/stdc++.h>
using namespace std;
void sort01(vector<int> &v)
{
  int size = v.size();
  int i = 0; int j = size-1;
  while(i<j)
  {
    if(v[j]==1) j--;
    if(v[i]==0) i++;
    if(i>j) break;
    if(v[i]>v[j])
    {
      //write the swapping logic or simply just make v[i] = 0 and v[j] = 1
      v[i] = 0;
      v[j] = 1;
      i++;
      j--;
    }
  }
}

int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(1);
  v.push_back(0);
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  sort01(v);
  for(int i=0; i<v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
}