#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

       int x,y;
        cin>>x>>y;
        if(x==0)
        {
              if(y==0) cout<<"origin\n";
              else if(y>0) cout<<"+y axis\n";
              else cout<<"-y axis\n";
        }
        else if(y==0)
        { if(x==0) cout<<"origin\n";
              else if(x>0) cout<<"+x axis\n";
              else cout<<"-x axis\n";
             
        }
        else{
       if(x>0)
       {
          if(y>0)
            cout<<"1st quad.\n";
            else cout<<"4th quad.\n";
       }
       else
       {
             if(y>0)
              cout<<"2nd quad.\n";
              else cout<<"3rd quad.\n";
       }
        }


return 0;
}