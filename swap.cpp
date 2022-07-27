//Write a  c++ program to swap two numbers//

#include<iostream>
using namespace std;

class swapp
{
    private:
    int a,b;
    
    public:
    void getdata();
    void calc();
    void putdata();
};

void swapp::getdata()
{
    cout<<"Enter the value of a: ";
    cin>>a;
    
    cout<<"Enter the value of b: ";
    cin>>b;
    
}

void swapp::calc()
{   cout<<"The value of a and b before swapping: "<<a<<","<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
}

void swapp::putdata()
{
   cout<<"The value of a and b after swapping are: "<<a<<","<<b<<endl;
}

int main()
{
    swapp s;
    s.getdata();
    s.calc();
    s.putdata();
    return 0;
}
