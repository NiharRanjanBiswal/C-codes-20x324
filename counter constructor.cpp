//C++ Program to Show counter using Constructor//

#include<iostream>
using namespace std;

class counter
{
    private:
    int count;
    
    public:
    counter()  //Constructor
    {
        count=0;
    }
    void inccount()
    {
        count++;
        
    }
    int getcount()
    {
        return count;
    }
    
};
int main()
{
    counter c1;
    cout<<"Before calling the  counter function,count= "<<c1.getcount()<<endl;
    
    c1.inccount();
    
    cout<<"After calling counter Function , count = ";
    cout<<c1.getcount();
    
    cout<<endl;
    return 0;
    
}
