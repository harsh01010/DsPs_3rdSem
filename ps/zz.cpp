#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


 vector<int> help(int N , vector<int>ans,int real)
    { 
          int t = real;
          if(N==t)
          {    
          }
          else if(N>0)
          {
               ans.push_back(N);
               help(N-5 , ans,t);
          }
          else {
               ans.push_back(N);
              help(N+5,ans,t);
          }
          
           ans.push_back(N);
          return ans;
         
    }

vector<int> pattern(int N){
        // code here
        vector<int>tp = {};
        return help(N,tp,N);
         
        
    }
   
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("i_p.txt", "r", stdin);
    // freopen("o_p.txt", "w", stdout);
    // #endif

       int n; cin>>n;
    
    vector<int>ans = pattern(n);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    



return 0;
}