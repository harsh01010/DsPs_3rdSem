#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct time
{
    int hour, minute, second;
    time(int x, int y, int z)
    {
        hour = x + y / 60;
        minute = y % 60 + z / 60;
        second = z % 60;
    }
};
int main()
{

    struct time t1(2, 30, 55), t2(33, 70, 55);
    struct time sum(t1.hour + t2.hour, t1.minute + t2.minute, t1.second + t2.second);

    return 0;
}