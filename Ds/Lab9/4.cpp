#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct complexx{
    int real;
     int img;
     complexx(int x , int y)
     {
          real = x , img = y;
     }
};

complexx add(complexx n1 , complexx n2)
{
      complexx n3(n1.real+n2.real , n2.img+n2.img);
      return n3;
}
int main()
{
 complexx  number1(2,3) , number2(3,4);
   
    complexx sum = add(number1 , number2);

    



return 0;
}