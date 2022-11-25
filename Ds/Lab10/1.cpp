#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void convertTOBin(int n)
{
    stack<int> stk;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        stk.push(rem);
    }

    while (!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }
}

void convertToOct(int n)
{
    stack<int> stk;
    while (n > 0)
    {
        int rem = n % 8;
        n /= 8;
        stk.push(rem);
    }

    while (!stk.empty())
    {
        cout << stk.top();
        stk.pop();
    }
}

void convertToHexa(int x)
{
    stack<int> stk;
    while (x > 0)
    {
        int rem = x % 16;
        x /= 16;
        stk.push(rem);
    }
    string str = "ABCDEF";
    while (!stk.empty())
    {
        if (stk.top() < 10)
            cout << stk.top();
        else
            cout << str[stk.top() - 10];
        stk.pop();
    }
    cout << "\n";
}

void convertToAnybase(int x)
{
    stack<int> stk;
    cout << "enter base\n";
    int b;
    cin >> b;
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (x > 0)
    {
        int rem = x % b;
        x /= b;
        stk.push(rem);
    }

    while (!stk.empty())
    {
        if (stk.top() < 10)
            cout << stk.top();
        else
            cout << str[stk.top() - 10];
        stk.pop();
    }
}

void revstr(string s)
{
      stack<int> stk;
      for(auto it:s)
      {
          stk.push(it);
      }

      while(!stk.empty())
      {
            cout<<stk.top();
            stk.pop();
      }
}

bool palindrome(string s)
{
        stack<int>stk;
         for(auto it:s)
         {
              stk.push(it);
         }
          int i = 0;
         while(!stk.empty())
         {
               if(stk.top() != s[i])
                return false;
                i++;
                stk.pop();
         }

         return true;
}

int main()
{
    int n;
    cin >> n;
    cout << "Binary:-";
    convertTOBin(n);
    cout << "\n";
    cout << "Octal:- ";
    convertToOct(n);
    cout << "\n";
    cout << "Hexadecimal:- ";
    convertToHexa(n);

    convertToAnybase(n);

    return 0;
}