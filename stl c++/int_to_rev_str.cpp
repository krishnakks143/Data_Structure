#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{int x,a;
    cin>>x>>a;
   //  = 123;

    stringstream ss;
    ss << x;

    string str;
    ss >> str;

    reverse(str.begin(), str.end());

    ss.clear();

    ss << str;
    ss >> a;
    
    if(a==x)
    {
        cout<<"yes";
    }
    
}