//C++ Program to find the area of rectangle using constructor m2//

#include<iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breadth;
    
    public:
    
    rectangle(int a,int b) //Parameterized constructor
    {
        length=a;
        breadth=b;
    }
    int areaofrect()
    {
        return (length*breadth);
    }
};
int main()
{
    rectangle r1(4,6);
    cout<<"The length of rectangle is  : "<<r1.length<<endl;
    cout<<"The breadth of rectangle is :"<<r1.breadth<<endl;
    cout<<"The Area of the rectangle is : "<<r1.areaofrect()<<endl;
    return 0;
    
}
