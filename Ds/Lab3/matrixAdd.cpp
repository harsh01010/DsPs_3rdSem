#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    vector<vector<int>>mat;
     vector<vector<int>>matt;

      int n ,m , nn ,mm; cin>>n>>m>>nn>>mm;
      for(int i=0;i<n;i++)
      {
          vector<int>row;
          for(int i=0;i<m;i++)
          {
              int x; cin>>x;
               row.push_back(x);
          }
          mat.push_back(row);
      }

       for(int i=0;i<nn;i++)
      {
          vector<int>row;
          for(int i=0;i<mm;i++)
          {
              int x; cin>>x;
               row.push_back(x);
          }
          matt.push_back(row);
      }

      if(nn!=n or m!=mm ) cout<<"can't be added\n";
       else{
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<m;j++)
              {
                   cout<< ( mat[i][j] + matt[i][j])<<" ";
              }
              cout<<"\n";
          }
        
       }


    



return 0;
}