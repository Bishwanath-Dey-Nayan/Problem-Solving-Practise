#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float a=0,b,c;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            a++;
        }
        else if(arr[i]>0)
        {
            b++;
        }
        else if(arr[i]==0)
        {
            c++;
        }

    }

    cout<<setprecision(6)<<fixed<<(b/n)<<endl;
   cout<<setprecision(6)<<fixed<<(a/n)<<endl;
   cout<<setprecision(6)<<fixed<<(c/n)<<endl;
    return 0;
}
