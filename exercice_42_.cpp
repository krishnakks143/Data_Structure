#include <iostream>
#include <math.h>
using namespace std;
class calculator
{
protected:
    float a, b;

public:
    void calc(float x, float y)

    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "sum of two numbers = " << a + b << endl;
        cout << "subtract of two numbers = " << a - b << endl;
        cout << "multiply of two numbers =" << a * b << endl;
        cout << "divide of two numbers =" << a / b << endl;
    }
};

class scientific
{
protected:
    float a, b;

public:
    void scientific_calc(float x, float y)
    {
        a = x;
        b = y;
    }

    void getdata_sci()
    {
        cout << "square root of number a =" << sqrt(a) << endl;
        cout << "square root of number b =" << sqrt(b) << endl;
        cout << "power of number =" << pow(a, b) << endl;
        cout << "area of rec =" << a * b << endl;
    }
};

class hybricalc : public calculator, public scientific
{
public:
    void show()
    {
        float x, y;
        cout << "Enter the value of a and b " << endl;
        cin >> x >> y;
        
        cout << "Here is the total result" << endl;
        cout<<endl;

        cout << "simple calculator" << endl;
        cout<<endl;
        
        calc(x, y);
        getdata();
        cout<<endl;
        cout << "scientific calc" << endl;
        cout<<endl;
         
         
        scientific_calc(x, y);
        getdata_sci();
    }

    // int setdata(int 44 , int 65);
    // int setdata_sci(int 54, int 84);
};
int main()
{
    hybricalc obj1;
    obj1.show();
    obj1.getdata();
    
}