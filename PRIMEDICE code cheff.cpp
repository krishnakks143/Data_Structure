#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b;
    bool prime=true;
    cin>>a>>b;
    int c=a+b;
    for(int i=2;i<=c/2;i++)
    {
        if(c%i==0)
        {
            prime=false;
            break;
        }
    }
    if(prime)
    cout<<"Alice"<<endl;
    else
    cout<<"Bob"<<endl;
}
	return 0;
}
