//Copy constructor Example

#include<iostream>
using namespace std;

class test
{
    int id;
    public:
    test(){}
    test(int a)
    {
        id=a;
    }
    test(test &b) //copy constructor
    {
        id=b.id;
    }
    void putdata()
    {
        cout<<id;
    }
};
int main()
{
    test a(20);
    test b(a);
    test c=a;

    test d;
    d=a;

    cout<<"\nId of a is : ";a.putdata();
    cout<<"\nId of b is : ";b.putdata();
    cout<<"\nId of c is : ";c.putdata();
    cout<<"\nId of d is : :";d.putdata();

    return 0;
}
