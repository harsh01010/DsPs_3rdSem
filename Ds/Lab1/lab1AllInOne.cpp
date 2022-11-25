#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void traverse(int arr[],int n)
{
      for(auto i=0;i<n;i++)cout<<arr[i]<<" "; cout<<"\n";
}

void insert(int arr[],int n,int ind,int ele)
{
      for(int i=n-1;i>=ind;i--)
      {
          arr[i+1] = arr[i];
      }
      arr[ind] = ele;
}
void insertSorted(int arr[],int n,int ele)
 {
      for(int i=n;i>=0;i--)
      {
          if(arr[i]>ele) arr[i+1] = arr[i];
          else {
              arr[i+1] = ele; return; 
          }
      }
 }
void deleteEle(int arr[],int n,int ele)
{
     int x = -1;
     for(int i=0;i<n;i++)
     {
          if(arr[i] == ele) {x=i; break;}
     }
    if(x==-1) return;

    for(int i=x;i<n-1;i++)
    {
           arr[i] = arr[i+1];
    }
   
}
int miss(int arr[],int n)
{
        int realSum = n*(n+1)/2;
        int sum = 0;  for(int i=0;i<n;i++) sum+=arr[i];

        if(realSum == sum) return -1;
         return realSum - sum;
}
int rep(int arr[],int n)
{
      sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
               if(arr[i] == arr[i+1]) return arr[i];
        }
        return -1;
       
}
void rev(int arr[],int lo,int hi)
{
        while(lo<=hi)
          swap(arr[lo],arr[hi]) , lo++ , hi--;
}



int main()
{
       int n; 
         cin>>n;
         int arr[100];
         for(int i=0;i<n;i++) cin>>arr[i];
         traverse(arr,n);
          rev(arr,0,n-1); 
          traverse(arr,n);

          insert(arr,n,0,5);
          traverse(arr,n+1);



    



return 0;
}