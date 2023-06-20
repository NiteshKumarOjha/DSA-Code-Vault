// Sort the array of 0’s and 1’s 

// Two Pass Method
#include<bits/stdc++.h>
using namespace std;
void sort01(vector<int> &v)
{
  int size = v.size();
  int noZ = 0;
  int noO = 0;
  for(int i=0; i<size; i++)
  {
    if(v[i]==0)
      noZ++;
    else
      noO++;
  }

  for(int i=0; i<size; i++)
  {
    if(i<=noZ-1)
      v[i] = 0;
    else
      v[i]=1;
  }
}

int main()
{
  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
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
