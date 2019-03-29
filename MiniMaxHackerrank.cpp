#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*int arr[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
   sort(arr,arr+5);
   cout<<sum-arr[4]<<" "<<sum-arr[0];

    return 0;*/
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    int low=sum;
    for(int i=0;i<5;i++)
    {
        sum=sum-arr[i];
        if(sum<low)
        {
            low=sum;
        }
    }
    cout<<low;
    return 0;
}
