//TEMPLATES OR GENERICS//
#include<iostream>
using namespace std;

template <class t>
t sum(t a,t b)
{
    return a+b;
}
int main()
{
    cout<<"Integer sum ="<<sum(5,9)<<endl;
    cout<<"Float sum="<<sum(2.3,2.5)<<endl;
    return 0;
}
