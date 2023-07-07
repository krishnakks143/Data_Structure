#include <iostream>
using namespace std;

int main()
{
    int n;
    int x,y,a;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>x>>y>>a;
    if((a>=20) && (a<=40) )
    {
    if((x<=a)  && (a<y))
    {
        cout<<"YES"<<endl;
    
    }
        else
    {
        cout<<"NO"<<endl;
    }

  
    }
        else
    {
        cout<<"NO"<<endl;
    }



    }
    return 0;
}