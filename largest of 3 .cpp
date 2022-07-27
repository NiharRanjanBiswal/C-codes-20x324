//C++ Program to find the largest among 3 numbers using classes//

#include<iostream>
using namespace std;

class largest
{
    int a,b,c;
    
    public:
    void input();
    void output();
};

void largest::input()
{
    cout<<"Enter the value of a,b,c : ";
    cin>>a>>b>>c;
    
}

void largest::output()
{
    int large;
    large=((a>b && b>c)?a:(b>c &&c>a)?b:c);
    
    cout<<"The largest number is: "<<large<<endl;
}

int main()
{
    largest l;
    l.input();
    l.output();
    return 0;
}
