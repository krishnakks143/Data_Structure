#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   int a[]={2,5,6,8,6};
     map<int,int> count;
      for(int i=0;i<5;i++)
      {
          count[a[i]]++;
      }
      for(auto itr :count)
      {
          cout<<itr.first <<" "<<itr.second<<endl;
      }
      return 0;
      
}