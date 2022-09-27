#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
      int n; 
       cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++) 
        {
              int x; cin>>x;
               arr.push_back(x);
        }

 vector<int>ans;
    unordered_map<int,int>mp;

     for(int i=0;i<n;i++)
     {
          mp.insert(  {arr[i],i});
     }

     for(auto it:mp)
     {
          ans.push_back(it.second);
     }

     for(auto it:ans) cout<<it<<" ";
    



return 0;
}