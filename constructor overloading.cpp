//C++ Program to show overload constructor//

#include<iostream>
using namespace std;

class test
{
    private:
    int a;
    char b;
    double c;
    
    public:
    test(int q)
    {
     a=q;
     b='0';
     c=0;
    }
    test(char q)
    {
        a=0;
        b=q;
        c=0;
    }
    test(double q)
    {
        a=0;
        b='0';
        c=q;
    }
    test(int q1,char q2,double q3)
    {
       a=q1;
       b=q2;
       c=q3;
    }
    void show()
    {
        cout<<"Value of a: "<<a<<endl<<endl;
        cout<<"Value of b: "<<b<<endl<<endl;
        cout<<"Value of c: "<<c<<endl<<endl;
    }
};
int main()
{
    test q1(5);
    test q2('t');
    test q3(3.14);
    test q4(4,'y',3.43);
    q1.show();
    q2.show();
    q3.show();
    q4.show();
    
    return 0;
    
}
