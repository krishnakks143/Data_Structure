#include<iostream>
#include<math.h>
using namespace std;

class point_dis{
    private:
    float x1,x2,y1,y2,d1;
    public:
   point_dis(float a,float b,float c,float d)
   {
    x1=a;
    x2=b;
    y1=c;
    y2=d;
   }
  
float distance()
{
    float d1;
    float a1;
    float a2;
    a1 = ((x2-x1)*(x2-x1));
    a2= ((y2-y1)*(y2-y1));
    d1= (sqrt(a1+a2));
    return d1;
}
void display(){
    cout<<"Distance betwwen the points  =  "  <<  d1 <<endl;
}

};
int main()
{ 
point_dis p(356,7455,254,8545);
p.display();


return 0;
};
