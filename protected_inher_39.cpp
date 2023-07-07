#include <iostream>
using namespace std;
/*
Public Derivation       	Public Derivation    	Private Derivation        Protected Derivation
Private members           	Not Inherited           Not Inherited              	Not Inherited
Protected members           Protected               Private                     Protected
Public members           	Public	Private         Private               	    Protected



As shown in the table,

1. If the class is inherited in public mode then its private members cannot be inherited in child class.
2. If the class is inherited in public mode then its protected members are protected and can be accessed in child class.
3. If the class is inherited in public mode then its public members are public and can be accessed inside child class and outside the class.
4. If the class is inherited in private mode then its private members cannot be inherited in child class.
5. If the class is inherited in private mode then its protected members are private and cannot be accessed in child class.
6. If the class is inherited in private mode then its public members are private and cannot be accessed in child class.
7. If the class is inherited in protected mode then its private members cannot be inherited in child class.
8. If the class is inherited in protected mode then its protected members are protected and can be accessed in child class.
9. If the class is inherited in protected mode then its public members are protected and can be accessed in child class.





Specifiers	    Same Class	    Derived Class	Outside Class
public	        Yes	            Yes	            Yes
private	        Yes	            No	            No
protected	    Yes	            Yes	            No
*/
class Base
{
protected:
    int a =9;;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
     //cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}
