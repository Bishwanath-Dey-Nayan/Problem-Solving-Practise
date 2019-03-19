#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float amount;
    cin>>n>>amount;
   if(n%5==0 && (n+.5)<(amount))
   {
       amount=amount-(n+.50);
       cout<<setprecision(2)<<fixed<<amount;
   }
   else
   {
       cout<<setprecision(2)<<fixed<<amount;
   }
    return 0;
}
