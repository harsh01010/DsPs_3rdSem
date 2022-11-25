bool check(int arr[], int brr[])
{
   int i = 0 , j=0;
   while(i<26 and j<26)
   {
        if(arr[i] == 0) i++;
        else if(brr[j] == 0) j++;
        else {
               if(arr[i] != brr[j]) return false;
               i++,j++;
        }
   }
   return true;
}
