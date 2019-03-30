 #include<iostream>
 using namespace std;
 int main()
 {
     int n,k,count_num=0;
     cin>>n>>k;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     if(n>=2 && n<=100 && k>=1 && k<=100){
     for(int i=0;i<n;i++)
     {
         for(int  j=0;j<n;j++)
         {
             if(i<j)
             {
                 int sum=0;
                 sum=arr[i]+arr[j];
                 if(sum%k==0)
                 {
                    count_num++;
                 }
             }
         }
     }
     }
     cout<<count_num;
 }
