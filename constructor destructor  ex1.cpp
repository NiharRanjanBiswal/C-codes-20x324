//C++ Program to show Constructor and Destructor Example//

#include<iostream>
using namespace std;

class add
{
    public:
    int x;
    
    add(int y)
    {
        cout<<"\n A Constructor is called "<<endl;
        x=y;
    }
    add()
    {
        cout<<"\nDefault constructor is called"<<endl;
    }
    ~add()
    {
        cout<<"Destructing "<<x<<endl;
    }
    int sum()
    {
        return (x+x);
    }
};

int main()
{
    add a1(5);
    add a2;
    
    cout<<"The value of a1 is : "<<a1.x<<endl;
    cout<<"Enter the a2 value: ";
    cin>>a2.x;
    cout<<a2.sum()<<endl;
    
    return 0;
}
