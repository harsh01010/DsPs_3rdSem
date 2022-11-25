#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

// transpose without using extra space , works only matrix is square
void traspose(vector<vector<int>>&arr)
{
     for(int i=0;i<arr.size();i++)
     {
          //   for(int j=0;j<arr[i].size();j++)
          //   {
          //           if(i+j > 2*i) swap(arr[i][j] , arr[j][i]);
          //   }
          for(int j= i+1;j<arr.size();j++) swap(arr[i][j] , arr[j][i]);
     }
         
}

void printArr(vector<vector<int>>arr)
{
        for(int i=0;i<arr.size();i++)
        {
             for(int j=0;j<arr[i].size();j++)
               cout<<arr[i][j]<<" ";  cout<<"\n";
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
        printArr(arr);



return 0;
}