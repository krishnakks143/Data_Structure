#include <iostream>
#include <math.h>
using namespace std;
void arraysum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    
    {
     sum+=arr[i];   
    }
    cout<<sum;
}
void printarray(int a[],int n){
    for(int i=0;i < n;i++){
        cout<<a[i]<<" "<<endl;
    }
    
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
arraysum(a,n);
   return 0;
}
   