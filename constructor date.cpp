//C++ Program to display Date using Constructors//

#include<iostream>
using namespace std;

class Date
{
    private:
    int dd,mm,yyyy;
    
    public:
    Date() //default Constructors
    {
        dd=31;
        mm=07;
        yyyy=2022;
        cout<<"\nDate Object has been created.........\n";
    }
    
    void display()
    {
        cout<<"\nThe Entered Date is : ";
        cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
    }
};

int main()
{
    Date d1;
    d1.display();
    return 0;
}
