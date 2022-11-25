#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define size 50
int stk[50];
int top = -1;

void push(int x)
{
    top++;
    stk[top] = x;
}

void pop()
{
    if (top = -1)
        cout << "stack is empty\n";
    else
    {
        int temp = stk[top];
        cout << temp;
        top--;
    }
}

bool isempty()
{
    return top != -1;
}

int main()
{

    return 0;
}