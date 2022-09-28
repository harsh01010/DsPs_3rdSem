#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

  void sieveOfera( int n1 ,int n)
  {
       bool listOfPrime[n+1] = {false};
       for(int i=2;i*i<=n;i++)
       {
              if(listOfPrime[i] == false)
              {
                   for( int j = i*i;j<=n;j+=i)
                     listOfPrime[j] = true;
              }
       }

       for(int i=n1;i<=n;i++)
       {
           if(listOfPrime[i] == false) cout<<i<<" ";
       }
  }
  
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif
    int r1 , r2;
     cin>>r1>>r2;
     sieveOfera(r1,r2);

return 0;
}