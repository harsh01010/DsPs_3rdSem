#include<bits/stdc++.h>
#define ll long long
using namespace std;

    vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        
              int i=0,j=0;
              vector<int>intr;
              while(i<N and j<M)
              {
                    if(arr1[i] < arr2[j]) i++;
                    else if(arr1[i] > arr2[j]) j++;
                    else if(arr1[i] == arr2[j])
                     {
                          if(i>0 and arr1[i] == arr1[i-1]) i++;
                          else intr.push_back(arr1[i]) , i++,j++;
                     }
              }
             if(intr.size() == 0) intr.push_back(-1);
              return intr;
    }

int main()
{  
    int n1 , n2; cin>>n1;
     int arr[n1]; for(auto &it:arr) cin>>it;
     cin>>n2; int brr[n2]; for(auto &it:brr) cin>>it;

      for(auto it : printIntersection(arr,brr,n1,n2)) cout<<it<<" ";
    

      



return 0;
}