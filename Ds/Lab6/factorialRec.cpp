#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int fact(int n , int ans = 1)
{
       if(n==1) return ans;
       return  fact(n-1,  ans*n);
}

int main()
{
       int n;
        cout<<"enter a number\n"; cin>>n;
        int ans = fact(n);
         cout<<"factorial = "<<ans<<"\n";
    



return 0;
}