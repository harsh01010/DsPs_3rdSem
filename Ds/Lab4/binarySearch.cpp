#include<bits/stdc++.h>
#define ll long long
using namespace std;


 int searchiterative(int arr[] , int l , int h , int ele){
	        while(l<=h){
				  int mid = (l+h)/2;
				   if(arr[mid] == ele) return mid;
				   if(arr[mid] < ele) l = mid+1;
				   else if(arr[mid] > ele) h = mid-1;
			}
			return -1;
 }

 int searchrecursive(int arr[] , int l , int h , int ele){
	if(l>h) return -1;
	  int mid = (l+h)/2;
	  if(arr[mid] == ele) return mid;
	  else if(arr[mid]>ele) return  searchrecursive(arr,l , mid-1 , ele);
	  else if(arr[mid]<ele) return searchrecursive(arr,mid+1,h,ele);
	  return -1;
 }

int main()
{
      int n;
	    cout
		<<"enter the total number of elements in the array\n";
		  cin>>n;
            int arr[n];
		  cout<<"enter the elements of the array\n";
		    for(int i=0;i<n;i++) cin>>arr[i];
	
	int t;
	  cout<<"enter the total number of elements to be searched\n";
	  cin>>t;
	    while(t--){
               int ele;
			     cout<<"enter the element to be searched\n";
				   cin>>ele;
               int opt;
			     cout<<"choose ant function\n1.Recursive binary search\n2.Itretive binary search\n";
				   cin>>opt;
				    int pos;
				   switch(opt){
					   case 1:
					    pos =  searchrecursive(arr ,0 , n , ele);
					    if(pos == -1) cout<<"element not found\n";
						else  cout<<"element found at the index "<<pos<<"\n";
						break;

						case 2:
						     pos =  searchiterative(arr ,0 , n , ele);
					    if(pos == -1) cout<<"element not found\n";
						else  cout<<"element found at the index "<<pos<<"\n";
						break;

						default :
						   cout<<"Invalid option chosen\n";
						   break;
					      
				   }

		}
	



return 0;
}