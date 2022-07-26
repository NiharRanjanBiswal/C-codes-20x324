//c++ Program to find factorial of a number using class//
#include<iostream>
using namespace std;

class factorial
{
    private:
    int n,i,fac=1;
    
    public:
    void input();
    void output();
    void calc();
};

void factorial::input()
{
    cout<<"Enter any number: ";
    cin>>n;
}

void factorial::calc()
{
    if(n==0 || n==1)
    cout<<"Factorial of number "<<n<<" is : 1\n";
    else
    {
        for(i=1;i<=n;i++)
        {
            fac=fac*i;
        }
    }
}

void factorial::output()
{
    cout<<"Factorial of "<<n<<" is : "<<fac<<endl;
} 

int main()
{
    factorial f;
    f.input();
    f.calc();
    f.output();
    return 0;
}
    
