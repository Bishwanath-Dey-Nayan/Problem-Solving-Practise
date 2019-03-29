#include<bits/stdc++.h>
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
    int high=0;
    int c=0;
    sort(arr,arr+n);
    high=arr[n-1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==high)
        {
            c++;
        }
    }
    cout<<c;

    return 0;
}
