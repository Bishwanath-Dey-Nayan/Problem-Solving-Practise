#include<iostream>
using namespace std;
int main()
{
    int n,d,m,count_way=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d>>m;

  for(int i=0;i<n;i++)
  {
      sum=arr[i];
      for(int j=i+1;j<m;j++)
      {
          sum=sum+arr[j];
      }
      if(sum==d)
      {
          count_way++;
      }
  }
    cout<<count_way;


}
