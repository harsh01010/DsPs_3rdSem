#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int serBin(int arr[],int lo,int hi ,int x)
{
       if(lo>hi) return -1;
       int mid = (lo+hi)/2;
        if(arr[mid] == x) return mid;
        if(arr[mid] > x) return serBin(arr,lo,hi-1,x);
          return serBin(arr,mid+1,hi,x);
}

int main()
{
    
      int n;
        cin>>n;
          int arr[n];
          for(auto &it:arr) cin>>it;
          int x; cin>>x;
          int ind = serBin(arr,0,n-1,x);
          cout<<ind<<"\n";



return 0;
}