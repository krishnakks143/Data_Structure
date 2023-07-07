#include<bits/stdc++.h>
using namespace std;

//main function
int main() {
   int a;
   vector<int> v;
   // user can add element as much as they want
   while(cin>>a)
   { 
       v.push_back(a);
   }
   for(auto &p : v)
   {
      cout<<p<<" ";
   }
   cout<<endl;
   return 0;
}