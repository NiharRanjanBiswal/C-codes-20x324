//C++ Program to show use of friend function//

#include<iostream>
using namespace std;

class test2;//forward class decltype
class test1
{
    int a;
    public:
    void geta()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    friend void big(test1,test2);
};
class test2
{
    int b;
    public:
    void getb()
    {
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    friend void big(test1,test2);
};

void big(test1 t1,test2 t2)
{
    if(t1.a>t2.b)
    {
    cout<<"a is big";
    }
    else if(t2.b>t1.a)
    {
        cout<<"b is big";
    }
    else
    {
        cout<<"Both are equal";
    }
}
int main()
{
test1 t1;
test2 t2;
t1.geta();
t2.getb();
big(t1,t2);
return 0;
}
