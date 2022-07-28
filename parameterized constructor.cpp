//C++ Parameterized Constructor//

#include<iostream>
using namespace std;

class wall
{
    private:
    int length;
    int height;
    
    public:
    wall (int len,int hght)
    {
      length=len;
      height=hght;
    }
    
    int area()
    {
      return length*height;   
    }
};
int main()
{
    wall w1(4,6);
    wall w2(4,9);
    
    cout<<"Area of Wall 1 : "<<w1.area()<<endl;
    cout<<"Area of Wall 2 : "<<w2.area()<<endl;
    
return  0;
}
    
