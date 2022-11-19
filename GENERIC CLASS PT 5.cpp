//GENERIC CLASS PT 5//
#include<iostream>
using namespace std;

template <class t>
class test
{
    t a,b;
public:
void get() //defination
{
     cin>>a>>b;
}
t sum(); //member function declaration
};
template <class t>
t test<t>::sum()   //defination
{
    return a+b;
}
int main()
{
    test <int> t1;
    test <float> t2;
    cout<<"Enter two values:"<<endl;
    t1.get();
    cout<<"The sum is:"<<t1.sum()<<endl;
    cout<<"Enter two values:"<<endl;
    t2.get();
    cout<<"The sum is:"<<t2.sum()<<endl;
    return 0;
}

