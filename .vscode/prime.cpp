#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
        int count=0;
     for(int i=2;i<n;i++)
     {
         for(int j=2;j<sqrt(i);j++)
         {
             if(j%i!=0)
             {
                 count++;
             }
         }
     } 
     cout<<count-1;  
     return 0;
        
    }