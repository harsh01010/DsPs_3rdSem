#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int calculate(int a, int b, char opr)
{
    switch (opr)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        return a % b;
    }
}
int postfix(string s)
{
    stack<int> stk;
    for (auto it : s)
    {
        if (it >= '0' && it <= '9')
        {
            stk.push(it - '0');
        }
        else
        {
            int opr1 = stk.top();
            stk.pop();
            int opr2 = stk.top();
            stk.pop();
            int val = calculate(opr1 , opr2 , it);
             stk.push(val);
        }
    }
    return stk.top();
}

int main()
{
    string s;
    cout << "enter a postfix expression\n";
    cin >> s;

    int ans = postfix(s);
    cout<<ans<<"\n";

    return 0;
}