#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int d;
    cin >> d;
    switch (d)
    {
    case 1:
        cout << "monday\n";
        break;
    case 2:
        cout << "tuesday\n";
    case 3:
        cout << "wed\n";
        break;
    case 4:
        cout << "thurs\n";
        break;
    case 5:
        cout << "fri\n";
        break;
    case 6:
        cout << "sat\n";
    case 7:
        cout << "sun\n";
    }

    return 0;
}