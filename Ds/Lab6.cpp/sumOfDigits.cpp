#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int sumOfdg(int n , int ans = 0)
{
      return n==0 ? ans : sumOfdg(n/10 , ans+n%10);
}


int main()
{
     int n;
      cin>>n;

    
    cout<<sumOfdg(n);


return 0;
}