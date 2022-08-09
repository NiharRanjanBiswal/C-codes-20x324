//C++ Program to introduce a friend class with declaring an object of one class in another another class//

#include<iostream>
using namespace std;

class author//container class 
{
    char aname[20];
    
    public:
    friend class book;
};

class book //contained class
{
    float price;
    char bname[30];
    author a;       //composition,author class object
    
    public:
    void getdata()
    {
        cout<<"Enter Author Name:";
        cin>>a.aname;
        cout<<"Enter Book Name:";
        cin>>bname;
        cout<<"Enter Price:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Author Name: "<<a.aname<<endl;
        cout<<"Book Name: "<<bname<<endl;
        cout<<"Price : "<<price<<endl;
    }
};

int main()
{
    book b1;
    b1.getdata();
    b1.putdata();
    return 0;
}
