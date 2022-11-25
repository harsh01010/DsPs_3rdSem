#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct student
{
      int roll;
      string name;
      int age;
};


void evenRoll(struct student* arr , int n)
{
      for(int i=0;i<n;i++)
      {
          if( (arr[i].roll) % 2 == 0)
           cout<<"Name-> "<<arr[i].name<<"\n";
      }
}

void  getStu(struct student* arr , int n , int r)
{
      for(int i=0;i<n;i++)
      {
          if(r == arr[i].roll)
          {
              cout<<"Name-> "<<arr[i].name<<"\n";
              return;
          }
      }
}

int main()
{
   cout<<"enter the total number of students:\n";
   int n; cin>>n;

     struct student arr[n];

     for(int i=0;i<n;i++)
     {
          cout<<"STUDENT:- "<<i+1<<"\n";
          cout<<"enter name:- "; cin>>arr[i].name;
          cout<<"enter roll:- ";cin>>arr[i].roll;
          cout<<"enter age:- "; cin>>arr[i].age;
     }
   

    



return 0;
}