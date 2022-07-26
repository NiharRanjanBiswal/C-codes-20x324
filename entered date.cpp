//C++ Program to display entered Date//

#include<iostream>
using namespace std;
class date
{
    private:
    int dd,mm,yyyy;
    
    public:
    void input();
    void output();
    
};

void date::input()
{
    cout<<"Enter Year: ";
    cin>>yyyy;
    
    cout<<"Enter Month: ";
    cin>>mm;
    
    cout<<"Enter Day: ";
    cin>>dd;
}
void date::output()
{
    cout<<"Todays Date in dd/mm/yyyy format :"<<dd<<"/"<<mm<<"/"<<yyyy;
}

int main()
{
    date d;
    d.input();
    d.output();
}  
    
    
    
    
    
