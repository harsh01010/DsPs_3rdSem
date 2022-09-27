#include<bits/stdc++.h>
#define ll long long
using namespace std;


 /* selection sort
   The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.
    The algorithm maintains two subarrays in a given array. one sorted and other unsorted
    arr[] = 64 25 12 22 11.

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64
  
 time:- O(n^2)
 inplace
 unstable
 does less memory write than other algorithm but the efficient algo in term of memory write is cycle sort
 it is the basic idea of heap sort
    */
 void selection_sort(int arr[],int n)
  {
       for(int i=0;i<n-1;i++)
        {
             int minInd = i;
              for(int j=i+1;j<n;j++){
                 if(arr[minInd] > arr[j])
                   minInd = j;
              }
              swap(arr[i],arr[minInd]);
        }
  }
int main()
{
     int n;
       cin>>n;
         int arr[n];
         for(auto &it:arr) cin>>it;

         selection_sort(arr,n);

         for(auto it:arr)cout<<it<<" ";
     



return 0;
}