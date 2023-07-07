#include <iostream>
#include <math.h>
using namespace std;
int sum1(int arr[], int size)
{ 
    int sum = 0;
    for (int i = 0; i <size; i++)
    {

   
   // cout<<a[i]<<" ";
    
    sum +=arr[i];
   // cout<<sum;
  
    }
  
    return sum;
}
int main()
{
   int a[45];
   for (int  i = 0; i < 5; i++)
   {
    cin>>a[i];
   }
   
 
   int size = sizeof(a)/sizeof(a[0]);
   int b= sum1(a,size);
   cout<<b;

  /* for (int i = 0; i <size; i++)

   {
   // cout<<a[i]<<" ";
    int sum = 0;dfdjiifuief9jo
    sum +=a[i];
    cout<<sum;
   }
   */
   return 0;
}