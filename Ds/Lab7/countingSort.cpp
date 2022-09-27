#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void countNsort(int arr[], int n)
{
    int lo = 0, hi = n - 1;
    int k = INT_MIN;
    for (int i = 0; i < n; i++)
        k = max(arr[i], k);
      int count[k + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        count[arr[i]]--;
        ans[count[arr[i]]] = arr[i];
    }
    cout << "the sorted array is:\n";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
}
int main()
{
    int n;
    cout << "enter the number of elements in the array:\n";
    cin >> n;

    int arr[n];
    cout << "enter the elements of the array:\n";
    for (auto &it : arr)
        cin >> it;

    countNsort(arr, n);

    return 0;
}