#include <iostream>
using namespace std;
class demo
{
    int a, b;
    public: void getdata()
    {
        cout<<"Enter a no";
        cin>>a>>b;
        
    }
    void display(){
        cout<<"\n"<<a<<"\n"<<b;
    }
    demo operator+(demo bb)
    {
        demo cc;
        cc.a=a+bb.a;
        cc.b=b+bb.b;
        return cc;
    }
};
int main()
{
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    aa.display();
    bb.display();
    cc=aa+bb;
    cc.display();
    return 0;
}
