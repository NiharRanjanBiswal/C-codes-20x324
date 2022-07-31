//C++ program to display students details using constructor and destructor//

#include<iostream>
using namespace std;

class student
{
    private:
    char name[30],add[30];
    int roll,standard;
    
    public:
    student();  //constructor
    ~student(); //destructor
    
    void getdata();  //mem fun1
    void putdata();   //mem fun2
};
 student::student()
{
    cout<<"\nThis is Student Details , constructor calling ........ "<<endl;
}

void student::getdata()
{
    cout<<"Enter student name: "<<endl;
    cin>>name;
    cout<<"Enter the address : "<<endl;
    cin>>add;
    cout<<"Enter student roll no: "<<endl;
    cin>>roll;
    cout<<"Enter standard: "<<endl;
    cin>>standard;
}

void student::putdata()
{
    cout<<"The entered student details are .........."<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Address : "<<add<<endl;
    cout<<"Roll No : "<<roll<<endl;
    cout<<"Standard: "<<standard<<endl;
}
student :: ~student()
{
    cout<<"Student Details is Closed....."<<endl;
}

int main()
{
    student s;
    s.getdata();
    s.putdata();
    
    return 0;
}
