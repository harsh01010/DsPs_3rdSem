#include<bits/stdc++.h>
#define ll long long
using namespace std;


 vector<int> findUnion(int arr1[], int arr2[], int n1, int n2)
    {
         
         int i=0,j=0;
          vector<int>ans;
         while(i<n1 and j<n2)
            
          {     if(i>0 and arr1[i] <= arr2[j] and arr1[i] == arr1[i-1]) i++;
                else if(j>0 and arr2[j] < arr1[i] and arr2[j] == arr2[j-1])j++;
              else if(arr1[i] > arr2[j]) ans.push_back(arr2[j]) , j++;
              else if(arr1[i] < arr2[j]) ans.push_back(arr1[i]),i++;
              else if(arr1[i] == arr2[j])   ans.push_back(arr1[i]) , i++,j++;

          }
          while(i<n1)
           {
                if(i>0 and arr1[i] == arr1[i-1]) i++;
                else ans.push_back(arr1[i]),i++;
           }
           while(j<n2)
           {
                if(j>0 and arr2[j] == arr2[j-1]) j++;
                else ans.push_back(arr2[j]),j++;
           }
           return ans;
    }

int main()
{

    



return 0;
}