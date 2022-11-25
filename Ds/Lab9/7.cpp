#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct marks
{
    int marks[3];
};

void setdata(struct marks *arr)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "[student " << i + 1 << " ]\n";
        cout << "enter marks of maths:- ";
        cin >> arr[i].marks[0];
        cout << "enter marks of phusics:- ";
        cin >> arr[i].marks[1];
        cout << "enter marks of chemistry:- ";
        cin >> arr[i].marks[2];
    }
}

void getPercent(struct marks d)
{
    float ans = (d.marks[0] + d.marks[1] + d.marks[2]) / 3.0;
    cout << "PERCENTAGE = " << ans;
}

int main()
{
    struct marks arr[5];

    setdata(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << "[ Student " << i + 1 << " ]\n";
        getPercent(arr[i]);
    }

    return 0;
}