#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void reverse(string &s)
{
       stack<char>stk;
        
        for(int i=0;i<s.length();i++)
        {
              stk.push(s.at(i));
        }

        while(!stk.empty())
        {
               cout<<stk.top();
               stk.pop();
        }

}
int main()
{
      string s;
        cin>>s;

        reverse(s);

    



return 0;
}