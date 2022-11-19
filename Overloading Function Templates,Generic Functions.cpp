//Overloading Function Templates,Generic Functions//Part 4

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
    cout<<"Two integer sum:"<<sum(10,20)<<endl;
    cout<<"Two float sum:"<<sum(1.5,2.1)<<endl;
    cout<<"Three integer sum:"<<sum(10,29,34)<<endl;
    cout<<"Three float sum:"<<sum(1.4,2.3,2.6)<<endl;
    
    return 0;
}
