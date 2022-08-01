//C++ Program to check use of constructor and destructor//
#include<iostream>
using namespace std;

class sample
{
    int a,b;
    
    public:    sample() //constructor
    {
        a=10;
        b=20;
    }
    ~sample() //destructor
    {
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};

int main()
{
    sample s;
}
