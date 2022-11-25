#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct distancee
{
      int inch;
      int feet;
      distancee(int x ,int y)
      {
          inch = x , feet = y;
      }
};
int main()
{
     distancee d1(3,4);
     distancee d2(2,3);

     distancee sum(d1.inch+d2.inch , d1.feet+d1.feet);
    
    



return 0;
}