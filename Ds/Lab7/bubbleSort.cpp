#include<bits/stdc++.h>
#define ll long long
using namespace std;

// bubble sort
 /*  
  In one iteration if we swap all adjacent elements of an array such that 
  after swap the first element is less than the second element then at the end of the iteration,
   the first element of the array will be the minimum element.
 
   T.C- theet(n^2) , S.C- O(1),  stable , inplace(dont requires any extra space for  sorting)

  Stable:- bubble , insertion , merge
  Unstable:- selection,quick , heap
 */

 void bubble_sort(int arr[],int n)
 { 
       for(int i=0;i<n-1;i++)
        {
             bool swapped = false;
              for(int j=0;j<n-i-1;j++)
               {
                      if(arr[j]>arr[j+1])
                       {
                           swap(arr[j],arr[j+1]);
                           swapped = true;
                       }
               }
               if(!swapped) return;
        }
 }
int main()
{

     
  int n;
    cin>>n;
     int arr[n];
     for(auto &it:arr) cin>>it;

     bubble_sort(arr,n);

     for(auto it:arr) cout<<it<<" ";


return 0;
}


/*  RECURSIVE BuBBle sort
  #include<bits/stdc++.h>
#define ll long long
using namespace std;

 void rec(int arr[],int i,int j=0)
 {
     if(i==1) return;
      else if(j<i-1)
      {  
             if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
             rec(arr,i,j+1);
      }
      else{
             rec(arr,i-1);
      }
 }
int main()
{
      int n; cin>>n;
      int arr[n];
      for(auto &it:arr) cin>>it;
       
       rec(arr,n);

       for(int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}

*/