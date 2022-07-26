//Write a C++ program to display Student details using class

#include<iostream>
using namespace std;

class Student
{
  private:
  
  char name[30];
  int roll_no,standard;
  float marks;
  
  public:
  void getdata();
  void putdata();
};

void Student::getdata()
{
    cout<<"Enter your name : ";
    cin>>name;
    
    cout<<"Enter rollno: ";
    cin>>roll_no;
    
    cout<<"Enter your standard : ";
    cin>>standard;
    
    cout<<"Enter your marks : ";
    cin>>marks;

    cout<<endl;
}




void Student::putdata()
{
    cout<<"Student Details are ...........";
    cout<<"Name : "<<name<<endl;
    cout<<"Roll No : "<<roll_no<<endl;
    cout<<"Standard : "<<standard<<endl;
    cout<<"Marks : "<<marks<<endl;
}

int main()
{
    Student s;
    s.getdata();
    s.putdata();
}
