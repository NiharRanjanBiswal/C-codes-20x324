//WAP to display the message "hello" followed by your name on screen
#include<iostream>
using namespace std;

class display
{
    public:
    void output();
};
void display::output()
{
    cout<<"hello Nihar"<<endl;
}

int main()
{
    display d;
    d.output();
    
    return 0;
}







//Create a class which stores name,roll number and total marks for a student.Input the data for a student and display it//  
#include<iostream>
using namespace std;

class student
{
    private:
    char name[30];
    int roll_no;
    float total_marks;
    
    public:
    void getdata();
    void putdata();
};

void student::getdata()
{
    cout<<"Enter Your Name : ";
    cin>>name;
    
    cout<<"Enter Roll no:  ";
    cin>>roll_no;
    
    cout<<"Enter Your Marks: ";
    cin>>total_marks;
    
}
void student::putdata()
{
    cout<<"\nStudent Details Are ....."<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"Marks : "<<total_marks<<endl;
}

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    
    return 0;
}






#include<iostream>
using namespace std;

class student
{
    int id,sub[6];
    char name[30];
    
    public:
    void getdata();
    void putdata();
};

void student::getdata()
{
    cout<<"Enter stu id,name :";
    cin>>id>>name;
    
    cout<<"Enter 6 sub marks: ";
    for(int i=0;i<5;i++)
    {
        cin>>sub[i];
        
    }
}

void student::putdata()
{
    int total=0;
    float per;
    
    for(int i=0;i<5;i++)
    {
        total=total+sub[i];
    
        per=((total/500.0)*100);
    }
    cout<<"Total= "<<total<<endl;
    cout<<"Percentage = "<<per<<endl;
    
}

int main()
{
    student s;
    s.getdata();
    s.putdata();
    return 0;
}
