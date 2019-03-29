#include<iostream>
using namespace std;
int main()
{

    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
     int arrm[m],arrn[n];
    for(int i=0;i<m;i++)
    {
        cin>>arrm[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arrn[i];
    }
    int p=0,q=0,c=0,d=0;
    for(int i=0;i<m;i++)
    {
        p=a+arrm[i];
        if(p>=s&&p<=t)
        {
            c++;
        }

    }
    for(int i=0;i<n;i++)
    {
        q=b+arrn[i];
        if(q>=s && q<=t)
        {
            d++;
        }
    }
    cout<<c<<endl<<d;

}
