#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int x)
{
  int left,right,mid;
  left=0;
  right=n-1;

  while(left<=right)
  {
       mid=(left+right)/2;
      if(arr[mid]==x)
      {
          return mid;

      }
      if(arr[mid]<x)
      {
          left=mid+1;
      }
      else
      {
          right=mid-1;
      }

  }
  return -1;
}

int main()
{
 int x;
 cout<<"Enter the value:";
 cin>>x;
 int arr[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31};
 int n=sizeof(arr)/sizeof(arr[0]);
 int result=BinarySearch(arr,n,x);
 if(result==-1)
 {
     cout<<"not present";
 }
 else
 {
     cout<<result;
 }

}

