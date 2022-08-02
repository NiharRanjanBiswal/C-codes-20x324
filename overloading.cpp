//C++ Program to demonstrate Constructor overloading with example//

#include<iostream>
using namespace std;

class Deposit
{
    int principal;
    int time;
    float rate;
    float totalamount;
    
    public:
    Deposit();
    Deposit(int p,int t,float r);
    Deposit(int p,int t);
    Deposit(int p,float r);
    void calculateamount();
    void display();
    
};
Deposit::Deposit()
{
  principal=time=rate=0.0;  
}
Deposit::Deposit(int p,int t,float r )
{
    principal=p;
    time=t;
    rate=r;
}
Deposit::Deposit(int p,int t)
    {
        principal=p;
        time=t;
        rate=0.08;
    }
Deposit::Deposit(int p,float r)
    {
        principal=p;
        time=2;
        rate=r;
    }
void Deposit::calculateamount()
    {
        totalamount=principal+(principal*time*rate)/100;
    }
void Deposit::display()
    {
        cout<<"Principal amount =  Rs."<<principal<<endl;
        cout<<"No of Years: "<<time<<"years"<<endl;
        cout<<"Rate of interest = "<<rate<<endl;
        cout<<"Total amount = Rs."<<totalamount<<endl;
    }
int main()
{
    Deposit d1;
    Deposit d2(2000,2,0.07f);
    Deposit d3(4000,1);
    Deposit d4(3000,0.12f);
    
    d1.calculateamount();
    d2.calculateamount();
    d3.calculateamount();
    d4.calculateamount();
    
    cout<<"\nObject D1 Details........."<<endl;
    d1.display();
    cout<<"\nObject D2 Details........."<<endl;
    d2.display();
    cout<<"\nObject D3 Details........."<<endl;
    d3.display();
    cout<<"\nObject D4 Details........."<<endl;
    d4.display();
    
    return 0;
    
}
