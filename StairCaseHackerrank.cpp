#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    k=n;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
          if(j<=k-1)
          {
              cout<<" ";
          }
          else{
            cout<<"#";
          }


       }
       cout<<endl;
       k--;
    }
}
