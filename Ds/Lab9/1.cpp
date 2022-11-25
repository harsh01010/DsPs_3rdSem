#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct st
{
      string name;
      int marks[6];
      int age;
};

bool eligible(st a)
{
     if(a.age <17) return false;
     int sum = a.marks[0] + a.marks[1] + a.marks[2] + a.marks[3]
              + a.marks[4] + a.marks[5];

      if(sum > 500) return true;
      return false; 
}

int main()
{
      st student;
      cout<<"enter name:- "; cin>>student.name;
      cout<<"enter age:- "; cin>>student.age;
      cout<<"enter marks of 6 subjects:- ";
      for(int i=0;i<5;i++) cin>>student.marks[i];

      if(eligible(student)) cout<<"YES\n";
      else cout<<"NO\n";
      



return 0;
}