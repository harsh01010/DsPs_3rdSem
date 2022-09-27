#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void SetDiff(int arr[] , int brr[] , int n,int m)
{
      vector<int>diff;
         int i = 0 , j=0;
         while(i<n and j<m)
         {
              if(arr[i] == brr[j])
              i++;
              else if(arr[i] < brr[j])
               diff.push_back(arr[i++]);

               else
                 diff.push_back(brr[j++]);
                
            
         }
         while(i<n) diff.push_back(arr[i++]);
          while(j<m) diff.push_back(brr[j++]);

          cout<<"the symmetric diffference of entered arrays is:\n";
            cout<<"{";
           for(auto it:diff) cout<<" "<<it<<" ";
           cout<<" }";
}


int main()
{
      int n1 ,n2;
      cout<<"enter two numbers: for sizes of the two arrays\n";
       cin>>n1>>n2;
         cout<<"enter the elements of the first arrays\n";
       int arr[n1] , brr[n2];
       for(auto &it:arr) cin>>it;
       cout<<"enter the elements of the second array\n";
       for(auto &iit:brr) cin>>iit;

       SetDiff(arr,brr,n1,n2);

    



return 0;
}