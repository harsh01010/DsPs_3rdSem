#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


/*
   INTERPOLATION SEARCH
   1. sorted
   2. uniform (gap between adjecent  elements should be same)
   3.
      ind = lo + (3-a[lo])/(a[hi]-a[lo])*(hi-lo);
   */

int interpolate(int arr[], int lo, int hi, int x)
{
    int pos;
 
    
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
 
        
        pos = lo
              + (((double)(hi - lo) / (arr[hi] - arr[lo]))
                 * (x - arr[lo]));
 
        // found the x
        if (arr[pos] == x)
            return pos;
 
        // binary search
        if (arr[pos] < x)
            return interpolate(arr, pos + 1, hi, x);
        if (arr[pos] > x)
            return interpolate(arr, lo, pos - 1, x);
    }
    return -1;
}
int main()
{
     int n;
      cout<<"enter total number of elements in the array\n"; cin>>n;
      int arr[n];
      cout<<"enter the elements of the array\n";for(auto &it:arr) cin>>it;
        int x; cout<<"enter the element to searched\n"; cin>>x;
      
       
     int pos = interpolate(arr,0,n-1,x);
     cout<<pos<<"\n";
    



return 0;
}