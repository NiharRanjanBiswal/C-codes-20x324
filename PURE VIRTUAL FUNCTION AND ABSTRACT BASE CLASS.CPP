//PURE VIRTUAL FUNCTION AND ABSTRACT BASE CLASS//
#include<iostream>
using namespace std;

class shape   //Abstract base class- a class containing pure virtual function
{
    protected:
    float d1,d2;
    
    public:
    void getdim()
    {
        cin>>d1>>d2;
    }
virtual float area()=0; ///pure vitual function when a function is  virtual keyword and initialized with zero its a pure virtual function//
};
class triangle:public shape
{
    public:
  float area()
    {
        return 0.5*d1*d2;
    }
};
class rectangle:public shape
{
    public:
   float area()
    {
        return d1*d2;
    }
};
int main()
{
    triangle t;
    cout<<"Enter triangle Base & Height: ";
    t.getdim();
    cout<<"Area of triangle: "<<t.area()<<endl;
    rectangle r;
    cout<<"Enter Length and Breadth of rectangle: ";
    r.getdim();
    cout<<"Area of Rectangle: "<<r.area()<<endl;
    return 0;
}
