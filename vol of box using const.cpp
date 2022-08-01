//C++ program to calculate volume of box using constructor//

#include<iostream>
using namespace std;

class box
{
    double length,breadth,height;
    double volume;
    
    public:
    box(double a, double b,double c);
    void vol();
};
box::box(double a,double b,double c)
{
    length=a;
    breadth=b;
    height=c;
    volume=(length*breadth*height);
}

void box::vol()
{
    cout<<"The Dimension of box is ..... "<<endl;
    cout<<"length= "<<length<<endl;
    cout<<"breadth= "<<breadth<<endl;
    cout<<"height= "<<height<<endl;
    
    cout<<"volume= "<<volume<<endl;
}

int main()
{
    box b(2,6,8),b2(3,7,8);
    
    b.vol();
    b2.vol();
    
    return 0;
}
