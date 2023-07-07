#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    cout<<endl;
    cout<<endl;
    cout<<m[a[2]]<<endl;
    
    cout<<endl;
    m[3]=36;
    cout<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}