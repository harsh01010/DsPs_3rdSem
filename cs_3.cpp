#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

        char ch; cin>>ch;
        if( ch>= 'a' and ch<= 'z' || ch>='A' and ch<='Z')
        {
        ch = tolower(ch);

         if(ch == 'a' or ch == 'e' or ch == 'i' || ch == 'o' || ch == 'u' )
            cout<<ch<<" is a vowel\n";
            else cout<<ch<<" is a consonant\n";
        }
        else
        cout<<ch<<" is not an alphabet\n";

return 0;
}