#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
       int yr;
        cin>>yr;
        if(yr%4 == 0)
        {
              if(yr%100 == 0)
              {
                  if(yr%400 == 0 ) cout<<yr<<" is a leap year\n";
                  else cout<<yr<<" is not a leap year\n";
              }
              else 
            cout<<yr<<" is a leap year\n";
        }
        else cout<<yr<<" is not a leap year\n";
return 0;
}