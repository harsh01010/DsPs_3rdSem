#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    stack<int>stk;
    stk.push(0) , stk.push(5) , stk.push(3) , stk.push(1);

    stack<int>sorted;

     while(!stk.empty())
     {
        if(!sorted.empty()) { sorted.push(stk.top()) , stk.pop();}
        else if( stk.top() >= sorted.top())
        {
             sorted.push(stk.top()) , stk.pop();
        }

        else{
                int x = stk.top();
               stk.pop();
               while(sorted.top() > x and !sorted.empty())
              {
                      
                
               



              }

        }
        
     }

  



return 0;
}