#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*
   insertion sort
    time := O(n^2) ,best case(1,2,4) :- theeta(n)
    inplace and stable
    used in practice for small arrays(timsort and introsort)
    */
 void sort_insert(int arr[],int n)
 {
      for(int i=1;i<n;i++)
       {
           int key = arr[i];
             int j = i-1;
             while(j>=0 and arr[j]>key)
              {
                   arr[j+1] = arr[j];
                   j--;
              }
              arr[j+1] = key;
              
       }
 }
int main()
{

      int n;
       cin>>n;
        int arr[n];

        for(int i=0;i<n;i++) cin>>arr[i];

        sort_insert(arr,n);
        for(int i:arr)cout<<i<<" ";



return 0;
}