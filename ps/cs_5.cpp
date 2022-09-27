#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


bool leap(int y)
{
        if(y%4 == 0)
        {
              if(y%100 == 0)
              {
                    if(y%400 == 0) return true;
                    else return false;
              }
              return true;
        }
        return false;
}
int main()
{
      // #ifndef ONLINE_JUDGE
      // freopen("i_p.txt", "r", stdin);
      // freopen("o_p.txt", "w", stdout);
      // #endif

        int d, m ,yr;
          cin>>d>>m>>yr;

          int dayys = 0;

          for(int i=2000 ;i <yr;i++)
          {
              if(leap(i)) dayys+=366;
              else dayys+=365;
          }

          dayys+=d;
          m--;

          int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

          if(leap(yr)) arr[1] = 29;

          for(int i=0;i<m;i++) dayys+= arr[i];

          //cout<<dayys<<"\n";

       string srr[7] = {"sat","sun","mon","tue","wed","thrs","fri"};

         

         int rem = dayys%7;

           // cout<<rem<<"\n";

           cout<<srr[rem-1]<<"\n";


return 0;
}