#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
   
    cout<<"enter the string :"<<endl;
    cin>>s;
    int size= s.size();
   //cout<<size<<endl;
   for(int i=size;i>=0;i--)
   {
    cout<<s[i];
   }
    return 0;
}
