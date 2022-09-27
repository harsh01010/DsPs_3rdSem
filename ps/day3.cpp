
/*
Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................
Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5
1+ x + x2/2! + x3/3! + x4/4!......
1- x + x2/2! - x3/3! + x4/4!......
x- x3/3! + x5/5! - x7/7!........ 
1- x2/2! + x4/4! - x6/6!........
Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
Given a positive integer n and the task is to find the sum of series
1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).

*/

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


ll s1(int n)
{
       ll sum = 0;
       for(int i =1 ;i<=n;i++)
       {
             int fact = 1;
               for(int i=2;i<=n;i++) fact*=i;
               sum+=fact;
       }

       return sum;
}

ll s2(int n)
{      ll sum = 0;
     for(int i=1;i<=n;i++)
     {
          int fact = 1;
            for(int i=2;i<=n;i++) fact*=i;

            sum+=(fact/i);
     }
     return sum;
}

long double s3(int n , int x)
{
      int dr = 1;
      int nr = x;
      long double sum = 1.0;

        for(int i=1;i<=n;i++)
        {
                for(int j=2;j<=i;j++) dr*=j , nr*=x;

                sum += (nr/dr);

        }

        return sum;
}

long double s4(int n , int x)
{
      int dr = 1;
      int nr = x;
      long double sum = 1.0;

        for(int i=1;i<=n;i++)
        {
                for(int j=2;j<=i;j++) dr*=j , nr*=x;
                     sum*=-1;
                sum += (nr/dr);
               

        }

        return sum;
}

 
 long double s5(int n , int x)
{
      int dr = 1;
      int nr = x;
      long double sum = x;

        for(int i=1;i<=n;i+=3)
        {
               for(int j=2;j<=i;j++) dr*=j , nr*=x;
                     sum*=-1;
                sum += (nr/dr);
               

        }

        return sum;
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("i_p.txt", "r", stdin);
    freopen("o_p.txt", "w", stdout);
    #endif

        int n; cin>>n; 



return 0;
}