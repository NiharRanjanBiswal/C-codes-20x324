//WCP to find the largest of three Numbers using class

#include<iostream>
using namespace std;

class largest
{
    private:
    int a,b,c;
    
    public:
    void getdata()
    {
        cout<<"Enter the 1st Number: " ;
        cin>>a;
        
        cout<<"Enter the 2nd Number: " ;
        cin>>b;
        
        cout<<"Enter the 3rd Number: " ;
        cin>>c;
    }
    
    void calc()
    {
        int x;
       x=(((a>b)&&(b>c))?a:((b>c)&&(c>a))?b:c);
    
        cout<<"The largest number among "<<a<<" "<<b<<" "<<c<<" is: "<<x<<endl;
    }
};
    int main()
    {
        largest l;
        l.getdata();
        l.calc();
   return 0;
    }
