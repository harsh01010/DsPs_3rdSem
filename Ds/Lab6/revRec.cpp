#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int rev(int n,int ans =0)
{
        return n==0 ? ans : rev(n/10 , ans*10 + n%10);
}
int main()
{
     int n;
       cin>>n;

      cout<<rev(n);



return 0;
}