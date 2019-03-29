#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       if(arr[i]>=38)
       {
          int m=arr[i]/5;
          int mn=(m+1)*5;
          if((mn-arr[i])<3)
          {
              cout<<mn<<endl;
          }
          else
          {
              cout<<arr[i]<<endl;
          }
       }
       else
       {
           cout<<arr[i]<<endl;
       }
   }
}
