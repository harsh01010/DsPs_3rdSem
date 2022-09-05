#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
          int bS;
           char grade;
           cout<<"enter basic salary and grade:\n";cin>>bS>>grade;

           if(grade >= 'A' or grade <= 'Z')
           {   
            int hra = bS*20/100 , da = bS*50/100 , pf = 11*bS/100;

             int alow = grade == 'A' ? 1700 :(grade == 'B'?1500:1300);
              cout<<"Total salary = "<<(bS+hra+da+alow-pf)<<"\n";
           }
           else cout<<"wrong grade\n";
          
return 0;
}