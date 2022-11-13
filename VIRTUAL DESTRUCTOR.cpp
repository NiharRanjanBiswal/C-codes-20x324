//VIRTUAL DESTRUCTOR//
#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"Base class Constructor"<<endl;
    }
virtual~base()
    {
        cout<<"Base class Destructor "<<endl;
    }
};
class der:public base
{
    public:
    der()
    {
        cout<<"Derived class Constructor\n";
    }
    ~der()
    {
        cout<<"Derived class Destructor\n";
    }
};
int main()
{
    base *b=new der;
    delete b;
    return 0;
}
