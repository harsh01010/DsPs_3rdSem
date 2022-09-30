 #include<bits/stdc++.h>
 typedef long long int ll;
 using namespace std;
 
long long power(int a, int n)
{
      int res = 1;
        while(n>0)
        {
              if(n&1) res*=a;
               a*=a;
            n>=1;
        }
        return res;


        // if(n==0) return 1;
        // return n*power(a,n-1);

}

 int main()
 {
     int a ,n;
       cin>>a>>n;
    
 
 
 
 return 0;
 }