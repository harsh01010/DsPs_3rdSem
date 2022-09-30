#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


int tower(int n , string beg = " Rod 1 " , string aux = " Rod 2 ", string dest = " Rod 3 ")
{
      static int cnt=0;
      if(n>0)
      {
          tower(n-1 , beg , dest , aux);
          cout<<"Move disk "<<n<<" from"<<beg<<"to"<<dest<<"\n";
           cnt++;
           tower(n-1,aux,beg,dest);
      }

      return cnt;
}
int main()
{
     int n;
       cin>>n;


      int steps = tower(n);
      cout<<"Total number of steps = "<<steps<<"\n";

    



return 0;
}