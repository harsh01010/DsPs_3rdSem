#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


struct student
{
      int roll;
       string name;
        int marks;
};

void setdata(student st)
{
       cout<<"enter the name of the student:- "; cin>>st.name;
       cout<<"enter the roll no. of thhe student:- "; cin>>st.roll;
       cout<<"enter the marks of the student:- "; cin>>st.marks;
}

void getdata(student st)
{
       cout<<" name of the student:- "<<st.name <<"\n";
       cout<<" roll no. of thhe student:- "<<st.roll<<"\n";
       cout<<" marks of the student:- "<<st.marks<<"\n";

}
int main()
{
     student st;
      setdata(st);
      getdata(st);
    
    



return 0;
}