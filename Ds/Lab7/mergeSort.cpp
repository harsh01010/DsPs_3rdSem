#include<bits/stdc++.h>
#define ll long long
using namespace std;


/* MERGE SORT
 :- div and conc.
 :- TC = theeta nlog(n)   n at first level and log(n) to divide
 :- aux = O(n)
 :- stable 
*/

void mergeArr(int arr[],int l,int m,int h)
{
    int n1 = m-l+1,n2=h-m;
    int a[n1] , b[n2];
    for(int i=0;i<n1;i++)a[i]=arr[i+l];
    for(int i=0;i<n2;i++) b[i] = arr[m+1+i];

    int p=0,q=0,r=l;
    while(p<n1 && q<n2)
    {
        if(a[p]<b[q]) arr[r++] = a[p++];
        else arr[r++] = b[q++];
    }
    while(p<n1) arr[r++] = a[p++];
    while(q<n2) arr[r++] = b[q++];
}

void mergeSort(int arr[],int l,int h)
{
    if(l<h){        //if(l==h) return
        int m = (l+h)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        mergeArr(arr,l,m,h);
    }
}

int main()
{

    int n;
     cin>>n;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      int l=0,h=n-1;
      mergeSort(arr,l,h);

      for(int i=0;i<n;i++) cout<<arr[i]<<" ";




return 0;
}