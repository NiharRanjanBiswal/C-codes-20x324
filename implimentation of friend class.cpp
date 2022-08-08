//C++ Program to impliment friend class//
#include<iostream>
using namespace std;

class test1  //container class
{
    int a,b;
    public:
    void getab()
    {
        cout<<"Enter the value of a and b: ";
        cin>>a>>b;
    }
    friend class test2;
};
class test2  //contained class
{
    public:
    void putab(test1 t1)
    {
        cout<<"a="<<t1.a<<endl;
        cout<<"b="<<t1.b;
    }
};
int main()
{
    test1 t1;
    test2 t2;
    t1.getab();
    t2.putab(t1);
    return 0;
}
