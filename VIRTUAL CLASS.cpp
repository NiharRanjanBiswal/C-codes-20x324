//Virtual class in c++//
#include<iostream>
using namespace std;

class c1  //Base class
{
    public:
    void c1func()
    {
        cout<<"C1 class function\n"<<endl;
    }
};
class c2:public virtual c1  //common vitual  base class
{
    public:
    void c2func() 
    {
        cout<<"C2 class function\n"<<endl;
    }
};
class c3:public virtual c1  //common virtual base class
{
    public:
    void c3func()
    {
    cout<<"C3 class function\n"<<endl;
    }
};
class c4:public c2,public c3
{
    public:
    void c4func()
    {
        cout<<"C4 class function\n"<<endl;
    }
};
int main()
{
    c4 obj;
    obj.c1func();
    obj.c2func();
    obj.c3func();
    obj.c4func();
    return 0;
}
