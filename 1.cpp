#include <iostream>
using namespace std;
class kks
{

public:
    int a, b;

    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
        cout<<"a value before exchange "  <<   a  <<  endl;
        cout<<"b value before exchange "  <<   b  <<  endl;
    }
    int swap();

    void display();
};
int kks::swap()
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void kks ::display()
{
        cout<<"a value after exchange "  <<   a  <<  endl;
        cout<<"b value after exchange "  <<   b  <<  endl;
}

int main()
{
    kks ob1, ob2, ob3;
    /* ob1.a=54;
     ob1.b=5;
     ob2.a=45;
     ob2.b=34;
     ob3.a=41;
     ob3.b=76 ;
 */
    // cout << "before exchange" << endl;
    //ob1.display();
    //cout<<"a and b"<<ob1.a<<ob1.b<<endl;
    ob1.setdata(54, 5);
    //cout << "after exchange" << endl;
    ob1.swap();
    ob1.display();

    // cout << "before exchange" << endl;
    //ob2.display();
    ob2.setdata(6, 98);
    //cout << "after exchange" << endl;
    ob2.swap();
    ob2.display();

    // cout << "before exchange" << endl;
    //ob3.display();
    ob3.setdata(87, 41);
    //cout << "after exchange" << endl;
    ob3.swap();
    ob3.display();

    return 0;
}