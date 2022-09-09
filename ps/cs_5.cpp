#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

 void dayy(void)
 {
       /*
           1/1/2000 -> refrence
            saturday
         */
        // for current century
        // for including other centuries also , check all the year which are divisible by
         // 4 but not divisible by 400 , other things will be same as below
        int day , month , yr; cin>>day>>month>>yr;
        int total=0; //yr-=2000; // change ref year here


  //int lp = (yr/4 + 1);
 // int nlp = (yr - yr/4-1);
        // total = (lp*366) + (nlp*365);

        for(int i=2000;i<yr;i+=4)
        {
              if( (yr%400 == 0) or ( (yr%4 == 0)&& (yr%100!=0)))
               total+=366;
               else total+=365;
        }
        total += day; month--;
          //cout<<total<<"\n";
       
        int daysOfMth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if( !((yr%400 == 0) or ( (yr%4 == 0)&& (yr%100!=0)))) daysOfMth[1] = 29;

        for(int i=0;i<month;i++) total+=daysOfMth[i];
        //cout<<total<<"\n";      
       string arr[] = {"saturday","sunday","monday","tuesday","wednesday","thursday","friday"};
       total%=7;
        cout<<arr[total]<<"\n";
 }   
     int main()
{   
     
      #ifndef ONLINE_JUDGE
     freopen("i_p.txt", "r", stdin);
     freopen("o_p.txt", "w", stdout);
     #endif
   
       
     dayy();

return 0;
}