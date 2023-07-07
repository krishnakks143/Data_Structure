#include <iostream>
#include <sstream>
using namespace std;
class Student {
    private:
    int age,standard;
    string first_name,last_name;
    public:
    void set_age(int x)
  {
    age = x;

    }
    void set_standard(int x)
    {
        standard = x;
    }

void set_first_name(string x)
{
    first_name = x;
}

void set_last_name(string x)
{
last_name = x;
}

int get_age(){
    return age;
}
string get_last_name()
{
    return last_name;
}

string get_first_name()
{
    return first_name;
}
int get_standard()
{
    return standard;
}

 void to_string()
{
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    
}

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout<<st.get_age() << "\n";
    cout<<st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout<<st.get_standard() << "\n";
    cout<< "\n";
    st.to_string();
    
    return 0;
}