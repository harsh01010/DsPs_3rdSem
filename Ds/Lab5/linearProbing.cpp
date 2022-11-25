#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
class hashing
{
private:
    int capacity;
    int size = 0;
    int *arr;

public:
  hashing(int a)
  {
        capacity = a;
          arr = new int[a];
          memset(arr, -1 , capacity*sizeof(int));
  }

  int hash(int key)
  {  // cout<<key%capacity<<"\n";
      return key%capacity;
  }
  bool insert(int key)
  {
      int ind = hash(key); //cout<<ind<<"\n";
      int t = ind;
       int i = 0; 
        // cout<<arr[ind]<<"\n";
       while(arr[ind] != -1 )
       {   // cout<<arr[ind]<<"\n";
          ind = (ind+ 1)%capacity;
           if(ind == t) return false;
       }
           //cout<<"hello\n";
       if(arr[ind] == key) return false;
       else 
         arr[ind] = key; size++;
         return true;
  }
  void printTable()
  {
      for(int i = 0 ;i<capacity;i++)
      {
           if(arr[i]!=-1)cout<<i<<" => "<<arr[i]<<"\n";
           else cout<<"(empty slot)"<<i<<" => "<<arr[i]<<"\n";
      }
  }
};
// 0 1 2 3 4 5 6 
int
main()
{   int n;
      cout<<"enter the size of the table :\n"; cin>>n;
      hashing table(n);
      int k;  cout<<"enter the total number of elements  to be inserted in the table\n"; cin>>k;
      cout<<"enter the elements:\n";
      for(int i = 0;i<k;i++) {
          int t;
            cin>>t;
              table.insert(t);
      }
       cout<<"\n HASH TABLE :-\n";
      table.printTable();

    return 0;
}