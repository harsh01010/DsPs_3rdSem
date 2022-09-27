#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
  

  // lomuto and hoarse are partition functions, used in quick sort.
  int lomuto(int arr[],int lo,int hi)
  {
     int pivot = arr[hi];
     int j = lo-1;
     for(int i = lo ; i<=hi-1;i++)
     {
          if(arr[i] < pivot)
          {
              j++;
              swap(arr[i],arr[j]);
          }
     }
      swap(arr[j+1],arr[hi]);
      return j+1;
  }

  int hoarse(int arr[],int lo,int hi)
  {
        int pivot = arr[lo];
        int i = lo-1;
        int j = hi+1;
        while(1)
        {
              do{
                  i++;
              }while(arr[i]<pivot);
              do{
                  j--;
              }while(arr[j]>pivot);
              if(i>=j) return j;
              swap(arr[i],arr[j]);
        }
  }
  void print(int arr[],int n) {
      for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  }

 // Quick sort :-
 /*
   . divide and conquer
   . wrost case :- n2
   . avg case :- nlogn
   . inplace (only extra space for recursion)
   . tail recursive (can be converted into iterative)
   . naive , lomuto , hoarse // partition functions
   . unstable
   . on average it is fastest
   . space: wrost case N , best case logN
 */
   //using lomuto (last element as pivot)
    void qsort_lomuto(int arr[],int lo,int hi)

    {
          if(lo<hi)
          {
               int prt = lomuto(arr,lo,hi);
                    qsort_lomuto(arr,lo,prt-1);
                   qsort_lomuto(arr,prt+1,hi);
          }
    }

 void qsort_hoarse(int arr[],int lo,int hi)

 {
       if(lo<hi)
       {
           int prt = hoarse(arr,lo,hi);
            qsort_hoarse(arr,lo,prt);
            qsort_hoarse(arr,prt+1,hi);
       }
 }

   // non recursive quick sort , space O(1) , tail call elemination
void qsort_tail(int arr[],int lo,int hi)
{
       begin:
        if(lo<hi)
        {
            int x = hoarse(arr,lo,hi);
             qsort_tail(arr,lo,x);
           // qsort_hoarse(arr,x+1,hi);
            lo = x+1;
            goto begin;
        }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

      int n; cin>>n;
      int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];

        // qsort_lomuto(arr,0,n-1);
       // qsort_hoarse(arr,0,n-1);
       qsort_tail(arr,0,n-1);
         print(arr,n);


     


return 0;
}