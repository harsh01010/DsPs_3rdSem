#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{

  int n;
  cout << "enter the total number of cities:\n";
  cin >> n;

  string arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}