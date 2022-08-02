//Example of copy constructor//
#include<iostream>
using namespace std;

class sample
{
    int a,b;
    
    public:
    sample(int a,int b)
    {
        (*this).a=a;
        (*this).b=a;
        
    }
    sample(sample &old)  //copy constructor
    {
        a=old.a;
        b=old.b;
    }
    void print ()
    {
        cout<<"a= "<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    sample s1(10,20);
    sample s2(s1);
    s1.print();
    s2.print();
    return 0;
    
}
