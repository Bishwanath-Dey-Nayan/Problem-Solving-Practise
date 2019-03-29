#include<iostream>
using namespace std;
int main()
{
    int p=0,q=0;
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if((x2>x1)&&(v2>=v1))
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0;;i++)
      {
          x1=x1+v1;
          x2=x2+v2;
          if(x1<x2 && (x1==x2)
          {
             cout<<"YES";
          }
          else
          {
              cout<<"NO";
              break;
          }


      }
    }
}
