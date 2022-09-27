#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


bool palind(int n)
{
       int rev = 0;
         int x = n;
          while(n  > 0)
          {
             rev = (rev*10 + n%10);
             n/=10;
          }
          return x == rev;
}

void meanMed(void)
{
     int arr[5];
     int s = 0;
       for(int i=0;i<5;i++){ cin>>arr[i]; s+=arr[i];}
         sort(arr,arr+5);
         cout<<"mean = "<<s/5.0<<" median = "<<arr[2]<<"\n";

}

int facto(int n , int ans = 1)
{
       if(n == 1) return ans;

       else return facto(n-1,n*ans);
}

void perfect_inRange(int lo , int  hi)
{  if(lo == 0) lo++;
   for(int ol=lo;ol<=hi;ol++)
   {
   
   int sum = 0;
  for(int i = 2;i*i<=ol;i++)
  {
       if(ol%i == 0) 
       {
          sum+=(i + ol/i);
       }
  }

   if(sum+1 == ol) cout<<ol<<" ";

   }
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

      
  int n; cin>>n;
  
     // palind(n)?cout<<"IS_palindrome\n":cout<<"NOT_palindrome\n";

      //  meanMed();

   
   //cout<<"factorial of "<<n<<" = "<<facto(n)<<"\n";
  
    perfect_inRange(0,1000);

return 0;
}