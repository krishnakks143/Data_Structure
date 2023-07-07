#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,3,4,2,5,6};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
     for(int &value : v)
    {
        value++;
       // cout<<value<<" ";
    }

    for(int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
     for(auto value : v)
    {
        cout<<value<<" ";
    }


    return 0;
}