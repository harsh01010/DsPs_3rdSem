#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


long long power(int a , int b)
{
       
        // recursive approach.
//   long long binpower(long  a ,long  b){
//       if(b==0) return 1;
//        long long res = binpower(a,b/2);
//       if(b&1) return res*res*a;
//       return res*res;
//   }
        long long  res = 1;
          while(b>0)
          {
              if(b&1)   res = res*a;
                a*=a;
                b>>=1;
          }
          return res;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

       int  a ,b;
        cin>>a>>b;
        cout<<power(a,b)<<"\n";



return 0;
}