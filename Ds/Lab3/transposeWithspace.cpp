#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void traspose(vector<vector<int>>&arr)
{
    int n = arr.size();
    int m = arr[0].size();

      int trp[m][n];

       for(int i=0;i<n;i++)
       {
         for(int j=0;j<m;j++)
         {
              trp[j][i] = arr[i][j];
         }
       }

       for(int i=0;i<m;i++)
        {
             for(int j=0;j<n;j++)
               cout<<trp[i][j]<<" ";  cout<<"\n";
        }
         
}


int main()
{

       vector<vector<int>>arr;
        int n , m; cin>>n>>m;
        for(int i=0;i<n;i++)
        {    vector<int>tp;
             for(int j=0;j<m;j++)
             {
                 int x; cin>>x; tp.push_back(x);
             }
             arr.push_back(tp);
        }

        traspose(arr);


return 0;
}