// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int k,s;
    cin>>k;
   int arr[] = {1,2,3,4,5,6,7};
   int size=sizeof(arr)/sizeof(arr[0]);
   int x=size/2;
   
   
  /* for(int i=0;i<x+1;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
  */
  int s1=size-k;
  for(int i=s1;i<size;i++)
  {
      cout<<arr[i]<<" ";
 /*     for(int j=0;j<s1;j++)
  {
      cout<<arr[j]<<" ";
  }*/
  }
 
  for(int i=0;i<s1;i++)
  {
      cout<<arr[i]<<" ";
  }
   

    
   
   
  

    return 0;
}