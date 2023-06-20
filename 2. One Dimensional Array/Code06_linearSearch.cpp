#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&v, int key)
{
    for(int i=0; i<v.size(); i++)
    {
      if(v[i]==key)
        return i;
    }
    return -1;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
    v.push_back(10);
    int key;
    cin>>key;
    int index = linearSearch(v,key);
    if(index==-1) cout<<"Element Not Found";
    else cout<<"Element Found at index = "<<index;
}