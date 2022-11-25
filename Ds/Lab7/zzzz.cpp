#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
        string s1 ,s2;
        cin>>s1>>s2;

        unordered_map<char,char>ump1;
        unordered_map<char,int>ump2;

         for(int i=0;i<s1.length();i++)
         {
                if(ump1.find(s1[i]) != ump1.end())
                {
                      if(ump1[s1[i]] != s2[i]) return false;
                }
                else ump1.insert( {s1[i],s2[i]});
         }
         

return 0;
}