#include <iostream>
#include <math.h>
using namespace std;
void arr_reverse(int arr[],int n)
{   int start,end,temp;
    cout<<"Here is the reverse array"<<endl;
    //start=arr[0];
    //end=arr[n-1];
    start=0;
    end=n-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start ++;
        end --;
        
    }
    
    
}
void arraysum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    
    {
     sum+=arr[i];   
    }
    cout<<sum<<endl;
}
void printarray(int a[],int n){
    for(int i=0;i < n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
   int n;
   cout<<"enter the size of array "<<endl;
   cin>>n;
   int a[100];
    cout<<"enter the array element number"<<endl;
   for (int  i = 0; i < n; i++)
   {
    cin>>a[i];
    }
printarray(a,n);
arr_reverse(a,n);
printarray(a,n);

   return 0;
}
   