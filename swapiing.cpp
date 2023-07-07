#include <iostream>
using namespace std;
class kks
{

   
public:
    int a;
    int b;

    void setdata(int  a1, int  b1)
    {
        a = a1;
        b = b1;
    }
    int swap();
   
    void display();
};
int kks ::swap()
{
    int temp;
    a = temp;
    temp = b;
    b = a;
   
}
void kks::display()
{
    cout << "a value is=" << a << "b value is=" << b << endl;
}

int main()
{
    kks ob1, ob2, ob3;
    cout << "before exchange" << endl;
   
    ob1.display();

    ob1.setdata(54, 5);
     ob1.swap();
    cout << "after exchange" << endl;
    ob1.display();

    cout << "before exchange" << endl;
    ob2.display();

    ob2.setdata(6, 98);
     ob2.swap();
    cout << "after exchange" << endl;

    cout << "before exchange" << endl;
    ob3.display();

    ob3.setdata(87, 41);
     ob3.swap();
    cout << "after exchange" << endl;
    ob3.display();

    return 0;
}
