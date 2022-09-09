#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter dimensions of the triangle:\n";
    cin >> a >> b >> c;

    if (a == b)
    {
        if (a == c)
            cout << "equilateral\n";
        else
            cout << "isosceles\n";
    }
    else
    {
        if (b == c)
            cout << "isoceles\n";
        else if (a == c)
            cout << "isoceles\n";
        else
            cout << "scalene\n";
    }

    return 0;
}