#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool is_palindrome(string s , int lo , int hi)
{
      if(s[lo] != s[hi]) return false;
      if(lo<hi)
      {
          is_palindrome(s,lo+1,hi-1);
      }
      return true;    
}
int main()
{

   string s;
     cin>>s;
     int n = s.length();
      if(is_palindrome(s,0,n-1)) cout<<"YES\n";
      else cout<<"No\n";
return 0;
}