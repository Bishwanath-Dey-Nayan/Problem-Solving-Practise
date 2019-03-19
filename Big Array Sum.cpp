#include<iostream>
using namespace std;
int main()
{
    long int j=10000000000;
    long int ar[j];
    long int total;
    for(int i=0;i<j;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<j;i++)
    {
        total=total+ar[i];
    }
    cout<<total;
    return 0;
}
