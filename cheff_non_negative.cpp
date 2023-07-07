#include <iostream>
using namespace std;

int main() {
int n,n1;
int prod=1;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>n1;
    if((n1>=2) && (n1<=10000))
    {
    int arr[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr[i];
    }

for(int i=0;i<n1;i++)
{
   
    prod =arr[i]*prod;
    
}
//cout<<prod<<endl;

if(prod<0)
{
    cout<<"1"<<endl;
}
else if (prod>=0) {
    cout<<"0"<<endl;
}
}
}
	return 0;
}
