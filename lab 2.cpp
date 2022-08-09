//Create two classes which store distance in feet,inches and meter,centimeter format respictively.
//Write a function which compares distance in object of these classes and display the larger one//

#include<iostream>
using namespace std;

class test2;
class test1
{
    int feet;
    int inches;
    
    public:
    void getd()
    {
        cout<<"Enter the value of feet:"<<endl;
        cin>>feet;
        cout<<"Enter the value of inches:"<<endl;
        cin>>inches;
    }
    friend void comparefunc(test1,test2);
    
};
class test2
{
    int meter;
    int centimeter;
    
    public:
    void putd()
    {
      cout<<"Enter the value in meter:"<<endl;
      cin>>meter;
      cout<<"Enter the value in Centimeter:"<<endl;
      cin>>centimeter;
    }
    friend void comparefunc(test1,test2);
};
void comparefunc(test1 t1,test2 t2)
{
    if(t1.feet*0.3048>t2.meter)
    {
        cout<<"Distance in feet and inches is Graeater";
    }
    else if(t2.meter>t1.feet*0.3048)
    cout<<"Distance in Meter and centimeter is Greater";
    else
    {
        cout<<"Both are Equal";
    }
}
int main()
{
    test1 t1;
    test2 t2;
    t1.getd();
    t2.putd();
    comparefunc(t1,t2);
    return 0;
}
