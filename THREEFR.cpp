#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	  if(a+b==c || a+c==b || b+c==a){
	      cout<<"yes\n";
	  }
	  else{
	      cout<<"no\n";
	  }
	    
	}
	return 0;
}
