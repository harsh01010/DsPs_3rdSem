#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void sortCount(int arr[],int n,int fact)
{
        int count[10] = {0}; int ans[n];
        for(int i=0;i<n;i++)
        {
              count[(arr[i]/fact)%10]++;
        }

        for(int i=1;i<10;i++)
         count[i]+=count[i-1];

         for(int i=n-1;i>=0;i--)
         {
             count[ (arr[i]/fact)%10 ]--;
             ans[count[ (arr[i]/fact)%10 ]] = arr[i];
         }
         for(int i=0;i<n;i++)
         arr[i] = ans[i];
}

void radixSort(int arr[],int n)
{
      int fact=arr[0];
      for(int i=1;i<n;i++) fact=max(fact,arr[i]);

      for(int i=1;fact/i>0;i*=10)
      {
          sortCount(arr,n,i);
      }
}
int main()
{
    
  int n; cout<<"enter the numbe of elements in the array\n";cin>>n;
  int arr[n];
  for(auto &i:arr) cin>>i;

    radixSort(arr,n);
     cout<<"the sorted array is:\n";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

return 0;
}