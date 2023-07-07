#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<int,string> m;
   m[1]="herabc";
   m[3]="trabc";
   m[4]="efgaabc";
   m[5]="abcqw";
    m.insert({6,"ghi"});//TC o(log(n))
    m.erase(3);
    cout<<m.size()<<endl;
    m.clear();
    for(auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    auto it =m.find(4);
    cout<<(*it).first<<" "<<(*it).second<<endl;
    cout<<m.size();
 cout<<endl;
 cout<<endl;
 cout<<endl;
 

 

    return 0;
}