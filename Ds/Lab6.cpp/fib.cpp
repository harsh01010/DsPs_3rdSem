#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;




//   long long fibb[1000];
// void fib(int n)
// {
//      fibb[0] = 1;
//      fibb[1] = 1;

//      for(int i=2;i<n;i++)
//      {
//         fibb[i] = fibb[i-1] + fibb[i-2];
//      }
      

        
// }

long long int dat[101];

 long long int  fib(int n)
 {
      if(n==1 || n==2) return dat[n] = n-1;
      else{
          if(dat[n] == 0)
           dat[n] = fib(n-1) + fib(n-2);
      }
      return dat[n];
 }

int main()
{
     int n;
       cin>>n;
    
          for(int i=1;i<n;i++)
             cout<<fib(i)<<" ";



return 0;
}