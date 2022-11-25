#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct complexx
{
      int real ,  img;
};

void setdata(complexx n1 , complexx n2)
{
      cout<<"enter the real part of first number:- "; cin>>n1.real;
       cout<<"enter the imaginary part of first number:- "; cin>>n1.img;
        cout<<"enter the real part of second number:- "; cin>>n2.real;
         cout<<"enter the imaginary part of first number:- "; cin>>n2.img;

}

complexx* add(complexx n1 , complexx n2)
{
     complexx n3[3];
      n3[0].real = n1.real + n2.real;
      n3[0].img = n1.img + n2.img;
      
       n3[1].real = n1.real - n2.real;
      n3[1].img = n1.img - n2.img;

       n3[2].real = n1.real * n2.real;
      n3[2].img = n1.img * n2.img;



}

int main()
{
   

    



return 0;
}