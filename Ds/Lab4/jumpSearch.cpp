#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 int linearSearch(int arr[],int lo,int hi,int x)
 {
       for(int i=lo;i<hi;i++) if(arr[i] == x)return i;
       return -1;
 }
int jumpSearch(int arr[],int n,int x)
{          int fact = sqrt(n);
      int jump = sqrt(n);
        int lo = 0;
        while( jump <= n)
        {
              if(arr[lo]<=x && arr[jump]>=x)
             return linearSearch(arr,lo,jump,x);
             else{
                  lo = jump;
                  jump+=fact;
             } 
        }
        return -1;
}
int main()
{
      int n; cin>>n;
      int arr[n];
      for(auto &it:arr) cin>>it;
      int x; cin>>x;

    int ind = jumpSearch(arr,n,x);
      cout<<ind<<"\n";

return 0;
}