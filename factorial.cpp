//++ Program to find Factorial of a number using class
#include<iostream>
using namespace std;

class test
{
    private:
    int n,fac=1,i;
    
    public:
    void getdata();
    void calc();
    void putdata();
};

void test::getdata(){
    
    cout<<"Enter the value of n: ";
    cin>>n;
}

void test::calc()
{
    for(i=1;i<=n;i++)
    {
    fac=fac*i;
    }
}

void test::putdata()
{
    cout<<"The factorial of "<<n<<" is : "<<fac<<endl;
}

int main()
{
    test t;
    t.getdata();
    t.calc();
    t.putdata();
}
