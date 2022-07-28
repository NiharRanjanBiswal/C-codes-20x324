//C++ Program to find the Area of Rectangle Using Constructor//

#include<iostream>
using namespace std;

class Rectangle{
    
    int length;
    int breadth;
    
    public:
    Rectangle(int,int);
    int areaofrect()
    {
        return(length*breadth);
    }
    
   int perimeter()
   {
       return 2*(length+breadth);
   }
    int lengthrec()
    {
        return length;
    }
    int breadthrec()
    {
        return breadth;
    }
};

Rectangle::Rectangle(int x,int y)
{
    length =x;
    breadth=y;
}

int main()
{
    Rectangle r(3,4);
    
    cout<<"The length of Rectangle is : "<<r.lengthrec()<<endl;
    cout<<"The breadth of Rectangle is : "<<r.breadthrec()<<endl;
    cout<<"The area of the Reactangle is: "<<r.areaofrect()<<endl;
    cout<<"Perimeter of Rectangle is : "<<r.perimeter()<<endl;
    
    return 0;
    
}
