//C++ example on copy constructor//
#include<iostream>
using namespace std;

class wall
{
    private: 
    int length;
    int height;

    public:
    wall(int len,int hght)
    {
        length=len;
        height=hght;
    }
    wall(wall &w)
    {
        length=w.length;
        height=w.height;
    }
    int  area()
    {
        return length*height;
    }
};
  int main()
  {
      wall w1(5,7);
      wall w2 = w1;
      
      cout<<"Area of wall 1: "<<w1.area()<<endl;
      cout<<"Area of wall 2: "<<w2.area()<<endl;
      return 0;
  }
