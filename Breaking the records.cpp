#include<iostream>
using namespace std;
int main()
{
    int n,mini,maxi,min_count=0,max_count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     mini=arr[0];
     maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            max_count++;
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
            min_count++;
        }
    }
    cout<<max_count<<" "<<min_count;

}
