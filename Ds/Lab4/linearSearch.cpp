#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



int ser(int arr[],int lo,int hi,int x)
{
      for(int i=lo;i<=hi;i++)
       if(arr[i] == x) return i;
       return -1;
}
int main()
{   int n; cin>>n;
      int arr[n];

   for(auto &it:arr) cin>>it;
     int x; cin>>x;
       int ind = ser(arr,0,n-1,x);
    



return 0;
}