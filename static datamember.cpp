//C++ Program to know how to access static data members through classes
//and objects//
#include<iostream>
using namespace std;

class test
{
    public:
    static int a;   //static data member declaration
    void geta()
    {
        cout<<"a="<<a<<endl;
    }
};
int test::a=10;

int main()
{
    test::a=200;
    cout<<"a="<<test::a<<endl;
    test t;
    t.geta();
    return 0;
}
