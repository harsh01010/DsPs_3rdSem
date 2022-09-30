#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int gcd(int a , int b)
{
      return b%a ? gcd(b%a,a) :  a;
}

int lcm(int a ,int b)
{
     return (a*b)/gcd(a,b);
}
int main()
{
       int a , b;
         cin>>a>>b;
         cout<<"gcd = "<<gcd(a,b)<<"\n";
           cout<<"lcm = "<<lcm(a,b)<<"\n";
return 0;
}