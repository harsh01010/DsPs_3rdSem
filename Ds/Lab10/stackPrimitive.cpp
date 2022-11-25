
#include <bits/stdc++.h>
using namespace std;
#define stkSz 10

struct stk
{
    int item[stkSz];
    int top;
};

int isempty(struct stk *s)
{
    if (s->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int pop(struct stk *s)
{
    if (isempty(s))
    {
        cout << "underflow\n";
        return -1;
    }
    int x = s->item[s->top];
    s->top = s->top - 1;
    return x;
}

void push(struct stk *s, int x)
{
    if (s->top == stkSz - 1)
    {
        cout << "overflow\n";
        return;
    }
    s->top = s->top + 1;
    s->item[s->top] = x;
}

int top(struct stk *s)
{
    int x = s->item[s->top];
    return x;
}

void init(struct stk *s)
{
    s->top = -1;
}

int main()
{
    int x;
    struct stk fs;
    init(&fs);
    push(&fs, 100);
    push(&fs, 200);
    push(&fs, 300);

    x = pop(&fs);
    cout << x << "\n";
    x = pop(&fs);
    cout << x << "\n";
    cout << top(&fs) << "\n";

    return 0;
}