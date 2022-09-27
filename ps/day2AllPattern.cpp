#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;


  void pat1(void)
  {
      for(int i=1;i<=4;i++)
      {   int p = i;
           for(int j=1;j<=i;j++)
           {
              cout<<p++<<" ";
           }
           cout<<"\n";
      }
  }

void pat2(void)
{  int x = 0;
    for(int i=1;i<=4;i++)
    {    int p = i;

          for(int j=1;j<=7;j++)
          {
                if(j>=(5-i) and j<=(3+i))
                {
                      if(i%2 == j%2) cout<<" ";
                      else cout<<p++<<" ";
                }
                else cout<<" ";
          }
          cout<<"\n";
          
          
    }
}
void pat3(void)
{
     for(char i = 'A';i<='C';i++)
     {
           for( char j = 'A';j<=i;j++)
           {
              cout<<i<<" ";
           }
           cout<<"\n";
     }
     
}
void pat4(void)
{
      for(char i = 'A';i<='D';i++)
      {   char t = i;

          for(char j = 'A';j<=i;j++)
          {
             cout<<t++<<" ";
          }
          cout<<"\n";
      }
}
void pat5(void)
{
      char ul = 'E';
     for(int i=1;i<=5;i++)
      {    char p = ul;
          for(int j=1;j<=i;j++)
          {
                cout<<p++<<" ";
          }
          ul--;
          cout<<"\n";
      }
   
}
void pat6(void)
{
     for(int i=1;i<=4;i++)
     {   int t = i;
         bool flag = false;
          for(int j=1;j<=7;j++)
          { 
              if(j>=(5-i) and j<=(3+i))
              {
                  if(j<=4)
                     cout<<t++<<"";
                     else{ if(!flag){t--;flag=true;}cout<<--t<<"";}
              }
              else cout<<" ";
             
          }
          cout<<"\n";
     }
}
void pat7(void)
{
     for(int i=1;i<=4;i++)
     {   
          for(int j=1;j<=7;j++)
          { 
              if(j>=(5-i) and j<=(3+i))
              {
                  cout<<"*";
              }
              else cout<<" ";
             
          }
          cout<<"\n";
     }
}
void pat8(void)
{
    for(int i=1;i<=5;i++)
    {
          for(int j=1;j<=5;j++)
          {  if(i<=3)
                {
             if(j>=(4-i) and j<=(2+i))
                   cout<<"* ";
                   else cout<<"  ";
                }
                else {
                     if(j>=(i-2) and j<=(8-i))
                      cout<<"* ";
                      else cout<<"  ";
                }
          }
          cout<<"\n";
    }
}
void pat9(void)
{
      for(int i=1;i<=5;i++)
      {
          for(int j=1;j<=5;j++)
          {
             if(i<=3)
             {
                   if(j>=i and j<=(6-i))
                     cout<<"* ";
                     else cout<<"  "; 
             }
             else {
                 if(j>=(6-i) and j<=i) 
                   cout<<"* ";
                   else cout<<"  ";
             }
          }
          cout<<"\n";
      }
}
void pat10(void)
{
    

    for(int i=1;i<=5;i++)
    {    
         int t=1;
          for(int j=1;j<=10;j++)
          {
               if(j<=i)
               {
                  cout<<t++<<" ";
               }
               else 
               {
                 if(j>=(11-i)) cout<<--t<<" ";
                 else cout<<"  ";
               }
          }
          cout<<"\n";
    }
}
void pat11(void)
{   bool covered = false;
      for(int i=1;i<=6;i++)
      {    int x = 1;
          for(int j=1;j<=11;j++)
          {
             if(i==1)
             {  
                  if(j>6 and !covered) covered=true,x--;
                  if(j<=6) cout<<x++<<" ";
                  else cout<<--x<<" ";
             }
            else if(j<=(7-i)) cout<<x++<<" ";
             else if(j>=(5+i)) cout<<--x<<" ";
             else cout<<"  ";
          }
          cout<<"\n";
      }  
}
int main()
{
//     #ifndef ONLINE_JUDGE
//     freopen("i_p.txt", "r", stdin);
//     freopen("o_p.txt", "w", stdout);
//     #endif

       
   pat1(); cout<<"\n";
   pat2(); cout<<"\n";
   pat3(); cout<<"\n";
   pat4(); cout<<"\n";
   pat5(); cout<<"\n";
   pat6(); cout<<"\n";
   pat7(); cout<<"\n";
   pat8(); cout<<"\n";
   pat9(); cout<<"\n";
   pat10(); cout<<"\n";
   pat11(); cout<<"\n";
return 0;
}