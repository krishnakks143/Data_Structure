// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 void lower(string& s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]-'A'+'a';
        }
        //cout<<s;
        }


    void remove(string& s){
        string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')
                temp+=s[i];
        }
        s=temp;
        cout<<s;
    }
    
int main() {
  string v="Krishna666 hello , , , k, k , 89 : <";
  //lower(v);
   remove(v);

    return 0;
}