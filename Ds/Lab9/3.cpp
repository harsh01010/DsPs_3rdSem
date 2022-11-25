#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct student{
      int roll;
       string name;
        int marks;
};
int main()
{
       
       student dataArr[15];

    for(int i=0;i<15;i++)
    {
          cout<<"STUDENT [ "<<i+1<<" ]\n";
          cout<<"enter the name:- "; cin>>dataArr[i].name;
          cout<<"enter the roll no:- ";cin>>dataArr[i].roll;
          cout<<"enter the marks:- "; cin>>dataArr[i].marks;
    }
    
     for(int i=0;i<15;i++)
    {
          cout<<"STUDENT [ "<<i+1<<" ]\n";
          cout<<" name:- "<<dataArr[i].name;
          cout<<" roll no:- "<<dataArr[i].roll;
          cout<<" marks:- "<<dataArr[i].marks;
    }
    



return 0;
}