//C++ Program to enter student details by passing parameters to constructors//

#include<iostream>
using namespace std;

class student
{
    public: 
    int marks;
    char grade;
    
    public:
    student(int m,char g)
    {
        marks=m;
        grade=g;
        
    }
    student()
    {
        cout<<"Default constructor is called"<<endl;
    }
    
    void show()
    {
        cout<<"Marks= "<<marks<<endl;
        cout<<"Grade= "<<grade<<endl;
    }
};

int main()
{
    student s1(450,'A'),s2;
    
    cout<<"Enter 2nd student Record"<<endl;
    cout<<"Enter marks: ";
    cin>>s2.marks;
    cout<<"Enter Grade: ";
    cin>>s2.grade;
    cout<<"Record of student 1: ......"<<endl;
    s1.show();
    cout<<"Record of student 2: ......"<<endl;
    s2.show();
    
    return 0;
    
}
