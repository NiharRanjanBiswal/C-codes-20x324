//Generic function overloading//
#include<iostream>
using namespace std;

template <class t>
t sum(t a,t b)
{
    return a+b;
}
template <class t>
t sum(t a,t b,t c)
{
    return a+b+c;
}
int main()
{
    cout<<"Two int sum="<<sum(10,20)<<endl;
    cout<<"Two float sum="<<sum(10.1,20.2)<<endl;
    cout<<"Three float sum="<<sum(10.1,20.2,4.3)<<endl;
    cout<<"Three float sum="<<sum(1,2,4)<<endl;
    return 0;
}
