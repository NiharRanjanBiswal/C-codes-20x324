//DESTRUCTORS//
#include<iostream>
using namespace std;

class base
{
    public:
    ~base() //destructor
    {
        cout<<"Base class Destructor "<<endl;
    }
};
class der:public base
{
    public:
    ~der()
    {
        cout<<" Derived class Destructor"<<endl;
    }
};
int main()
{
    der d;
    return 0;
}
