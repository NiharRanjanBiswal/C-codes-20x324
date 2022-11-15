//How to pass two different types of arguments to the same function using Generics//
#include<iostream>
using namespace std;

template <class t1,class t2>
float sum(t1 x,t2 y)
{
    return x+y;
}
int main()
{
    cout<<"Int sum="<<sum(10,20)<<endl;
    cout<<"Flaot sum="<<sum(1.2,2.5) <<endl;
    cout<<"sum of both float and integer is:"<<sum(3,2.8)<<endl;
    cout<<"sum of both integer and float is:"<<sum(1.2,8)<<endl;
    return 0;
}
