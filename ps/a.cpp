// #include<bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// struct student
// {
//       int roll , marks;
//       string name;
// };


// int main()
// {
     
//        struct student st1;
//        struct student* st1Ptr;

//          st1Ptr = &st1;
//          st1Ptr->name = "nameOfStudent";
//          st1Ptr->roll = 67;
//          st1Ptr->marks = 33;

//          cout<<"single student:\n__________________________\n"<<st1.name<<"\n"<<st1.roll<<"\n"<<st1.marks<<"\n__________________________\n";
//         struct student stArr[4];
//         for(int i=0;i<=3;i++)
//         {
//              (stArr+i)->name = "name";
//              (stArr+i)->marks = 100;
//              (stArr+i)->roll = 4;
//         }
//         cout<<"4 students:\n";
//           cout<<"\n__________________________\n";

//         for(int i=0;i<4;i++)
//         {
//               cout<<i[stArr].name<<"\n"<<stArr[i].roll<<"\n"<<stArr[i].marks<<"\n"; 
//               cout<<"\n__________________________\n";
//         }

// return 0;
// }


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct height{
      int ft , in;
};

height add(height h1 , height h2)
{
       height ans;
        ans.ft = h1.ft + h2.ft;
        ans.in = h1.in + h2.in;
        return ans;
}


int main()
{
     
       height h1 , h2;
        cout<<"enter h1(ft , in): "; cin>>h1.ft>>h1.in;
        cout<<"enter h2(ft,in): "; cin>>h2.ft>>h2.in;
        height ans = add(h1,h2);
        cout<<ans.ft<<" "<<ans.in<<"\n";
return 0;
}