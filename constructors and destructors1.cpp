//C++ Program to calculate Volume of cube using constructor//
#include<iostream>
using namespace std;

class cube
{      
    
        public:
        int side;
        int volume()
        {
            return (side*side*side);
        }
        
        cube(int side1)
        {
            cout<<"\nThe constructor is called"<<endl;
            side=side1;
        }
        cube()
        {
            cout<<"\nDefault constructor is called"<<endl;
        }
        ~cube()
        {
            cout<<"\nDestructing "<<side<<endl; 
        }
 };
        int main()
        {
        
        cube c1(2.1);
        cube c2;
        
        cout<<"\nThe side of the cube is : "<<c1.side<<endl;
        cout<<"\nThe volume of the first cube is : "<<c1.volume()<<endl;
        cout<<"\nEnter the value of the second cube : ";
        cin>>c2.side;
        cout<<"\nThe volume of the second cube is : "<<c2.volume()<<endl;
        
        return 0;
        }
