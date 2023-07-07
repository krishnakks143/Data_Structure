#include <bits/stdc++.h>
using namespace std;

int main()
{ int x,a;
cin>>x;
int sum=0;
    while (x!=0)
    {
        a=x%10;
        sum=sum*10+a;
        x=x/10;
    }
    cout<<sum;
    return 0;
}