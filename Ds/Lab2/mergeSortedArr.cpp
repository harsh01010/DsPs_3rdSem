#include <bits/stdc++.h>
#define ll long long
using namespace std;

void mergeArr(int *arr, int l, int h, int mid)
{
      int n1 = mid - l + 1;
      int n2 = h - mid;
      int aux1[n1], aux2[n2];
      int n = h + 1;
      int p = 0, q = 0, k = 0;
      for (int i = l; i <= mid; i++)
            aux1[p++] = arr[i];
      for (int i = mid + 1; i <= h; i++)
            aux2[q++] = arr[i];

      p = 0, q = 0;
      while (p <n1 && q < n2)
      {
            if (aux1[p] < aux2[q])
                  arr[k++] = aux1[p++];
            else
                  arr[k++] = aux2[q++];
      }
      while (p < n1)
            arr[k++] = aux1[p++];
      while (q < n2)
            arr[k++] = aux2[q++];
}
int main()
{

      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
            cin >> arr[i];

      int l, h;
      cin >> l >> h;
      int mid;
      cin >> mid;
      mergeArr(arr, l, h, mid);
      for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

      return 0;
}