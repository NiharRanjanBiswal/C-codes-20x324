//WAP to swap private data members of two classes//

#include<iostream>
using namespace std;

class test2;
class test1
{
    int a;
    public:
    void geta()
    {
        cout<<"Enter the Value of a: ";
        cin>>a;
    }
    friend void swapfunc(test1,test2);
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
    friend void swapfunc(test1,test2);
};
void swapfunc(test1 t1,test2 t2)
{
    int temp;
    cout<<"Value of a and b before swapping :" <<t1.a<<","<<t2.b<<endl;
    temp=t1.a;
    t1.a=t2.b;
    t2.b=temp;
    cout<<"The value of a and b after swapping are:"<<t1.a<<","<<t2.b<<endl;
}
int main()
{
    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    swapfunc(t1,t2);
    return 0;
    
}
