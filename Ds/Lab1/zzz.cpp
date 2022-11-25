#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;



void insert(int *arr , int x , int n)
{
        if(n == 0) {arr[0] = x; return ;}

       int i = n-1;
        while(arr[i] > x and i>=0)
        {
              arr[i+1] = arr[i];
              i--;
        }
        arr[i+1] = x;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

    

   int size; cin>>size;
       int arr[size];
        int n; cin>>n;
        for(int i=0;i<n;i++)
        {
              int x; cin>>x;
              insert(arr,x,i);
        }
        for(int i=0;i<n;i++)
        {
              cout<<arr[i]<<" ";
        }
        cout<<"\n";
      

return 0;
}