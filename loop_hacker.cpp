#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    if (n1<10)
    {
        for(int i=n1;i<=n2;i++)
        {
     switch (i) {
  case 1:
    cout << "one"<<endl;
   // cout<<"odd"<<endl
    break;
  case 2:
    cout << "two"<<endl;
     //cout<<"even"<<endl;
   break;
  case 3:
    cout << "three"<<endl;
    break;
  case 4:
    cout << "four"<<endl;
   break;
  case 5:
    cout << "five"<<endl;
   break;
  case 6:
    cout << "six"<<endl;
   break;
  case 7:
    cout << "seven"<<endl;
    break;
  case 8:
    cout<<"eight"<<endl; 
    break;
  case 9:
    cout<<"nine"<<endl;
    break;
     }   
}
    }
for(int i=10;i<=n2;i++){
    if((i>=9) && (i%2==0)) 
    {
        cout<<"even"<<endl;

    }
   else if ((i>9) && (i%2!=0))  {
    cout<<"odd"<<endl;
   }
}
    return 0;
    
}