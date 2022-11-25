#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
vector<vector<int>> multiply(vector<vector<int>>matrix1 , vector<vector<int>>matrix2)

  {
            int n1 = matrix1.size() , m1 = matrix1[0].size();
            int n2 = matrix2.size() , m2 = matrix2[0].size();
              vector<vector<int>>multi;
            
            for(int i=0;i<n1;i++)
            {
                    vector<int>row;
                   for(int j=0;j<m2;j++)
                   {
                             int sum=0;
                           for(int k=0;k<n2;k++)
                           {
                                 sum+= (matrix1[i][k]*matrix2[k][j]);
                                 
                           }
                           row.push_back(sum);
                   }
                   multi.push_back(row);
            }
            return multi;
              
         
  }
int main()
{
      int n1, n2,m1,m2;
      cin>>n1>>m1>>n2>>m2;

     

      if(m1 == n2)
      {
             vector<vector<int>>matrix1;
             vector<vector<int>>matrix2;
              cout<<"enter elements for the first matrix:\n";
              for(int i=0;i<n1;i++)
              {
                    vector<int>row;
                    for(int j=0;j<m1;j++)
                      {
                          int x; cin>>x; row.push_back(x);
                      }
                      matrix1.push_back(row);
              }

              cout<<"enter elements for the second matrix:\n";
              for(int i=0;i<n2;i++)
              {
                    vector<int>row;
                    for(int j=0;j<m2;j++)
                      {
                          int x; cin>>x; row.push_back(x);
                      }
                      matrix2.push_back(row);
              }

           vector<vector<int>>ans = multiply(matrix1,matrix2);
            cout<<"the product of the entered matrices is:\n";
               cout<<"fine\n";

              for(int i=0;i<ans.size();i++)
              {

                     for(int j=0;j<ans[0].size();j++)
                      cout<<ans[i][j]<<" ";
                      cout<<"\n";
              }


      }
      else cout<<"can't be multiplied\n";

    



return 0;
}