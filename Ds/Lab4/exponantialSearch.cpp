#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int serBin(int arr[],int lo,int hi,int x)
{
       while(lo<=hi)
       {
            int mid = (lo+hi)/2;
            if(arr[mid] == x) return mid;
            else if(arr[mid]<x) lo = mid+1;
            else hi = mid-1;
       }
       return -1;
}

int expoSearch(int arr[],int n,int x)
{
      if(arr[0] == x) return 0;

      int i= 1;
      while(i<n and arr[i]<=x)
      {
        i*=2;
      }
      return serBin(arr,i/2,min(i,n-1),x);
}


int main()
{
      cout<<"enter the size of thr array:\n";
      int n; cin>>n;
      int arr[n];
      cout<<"enter the elements of the array\n";
       for(auto &it:arr)cin>>it;
       int x; cout<<"enter the element to be searched:\n";cin>>x;
         int ind = expoSearch(arr,n,x);
         cout<<ind<<"\n";

    



return 0;
}