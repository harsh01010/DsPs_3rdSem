#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int c;
    cin >> c;
    if (c < 40)
    {
        if (c < 30)
        {
            if (c < 20)
            {
                if (c < 10)
                {
                    if (c < 0)
                        cout << "freezing weather\n";

                    else
                        cout << "very cold weather\n";
                }

                else
                    cout << "cold weather\n";
            }

            else
                cout << "normal in temprature\n";
        }
        else
            cout << "very hot\n";
    }
    else
        cout << "its very hot\n";

    return 0;
}