#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
// partition  functions
int hoarse(int arr[],int lo,int hi)
{
       int pivot = arr[lo];
       int i = lo-1 , j = hi+1;
       while(true)
       {
              do{
                 i++;
              }while(arr[i] < pivot);

              do{
                 j--;
              }while(arr[j] > pivot);
              if(i>=j) return j;
              swap(arr[i],arr[j]);
       }
}

int lomuto(int arr[],int lo,int hi)
{
      int pivot = arr[hi];
      int j = lo-1;

      for(int i=lo;i<hi;i++)
      {
          if(arr[i] < pivot) swap(arr[i],arr[++j]);
        
      }
      swap(arr[hi],arr[++j]);
      return j;
}


// quick sort
void qsort_lomuto(int arr[],int lo,int hi)
{
      if(lo<hi)
      {
           int ind = lomuto(arr,lo,hi);
            qsort_lomuto(arr,lo,ind-1);
            qsort_lomuto(arr,ind+1,hi);
      }
}

void qsort_hoarse(int arr[],int lo,int hi)
{
      if(lo<hi)
      {
           int ind = hoarse(arr,lo,hi);
            qsort_hoarse(arr,lo,ind);
            qsort_hoarse(arr,ind+1,hi);
      }
}



// driver
int main()
{

     int n; cin>>n;
     int arr[n];
     for(auto &it:arr) cin>>it;
      cout<<lomuto(arr,0,n-1)<<"\n";
      
     for(auto it:arr) cout<<it<<" ";
return 0;
}