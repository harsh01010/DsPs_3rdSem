#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


void sieveForRange(int a , int b)
{
       bool arr[b+1] = {false};

       for(int i=2;i*i<=b;i++)
       {
            if(arr[i] == false)
            {
                for(int j = i*i;j<=b;j+=i)
                 arr[j] = true;
            }
       }

       for(int i = a;i<=b;i++)
       {
            if(!arr[i]) cout<<i<<" ";
       }
}

bool SieveForcheck(int a)
{
      for(int i=2;i*i<=a;i++)
      {
          if(a%i == 0) return false;
      }

      return true;
}


void nearestPrime(int b)
{
      bool arr[b+1] = {false};

       for(int i=2;i*i<=b;i++)
       {
            if(arr[i] == false)
            {
                for(int j = i*i;j<=b;j+=i)
                 arr[j] = true;
            }
       }

     
      for(int i = b ; i>=2;i--)
      {
            if(arr[i] == false ) {cout<<i<<" "; break;}
      }
}


int main()
{
     #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif

       int n , nn;
         cin>>n>>nn;

       // sieveForRange(n,nn);
        

      nearestPrime(n);



return 0;
}