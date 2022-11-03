//C++ Program use of default constructor//

#include<iostream>
using namespace std;

class Wall
{
   
    int length;
    
    public:
    Wall()
    {
        length= 6;
        cout<<"Creating a Wall"<<endl;
        cout<<"Length = "<<length<<endl;
    }
};

int main()
{
    Wall w;
    return 0;
}
