//C++ Program to show Example of Default copy constructor//

#include<iostream>
#include<string>
using namespace std;

class Book
{
    private:
    int pages;
    char title[3];
    
    public:
    Book(int q,char w[3])
    {
        pages=q;
        for(int i=0;i<3;i++)
        {
            title[i]=w[i];
        }
    }
    void show()
    {
        cout<<"Title of Book: "<<title<<endl;
        cout<<"No of pages: "<<pages<<endl;
    }
    
};

int main()
{
    Book b1(24,"C++");
    Book b2(b1);
    Book b3=b1;
    
    cout<<"Details of b1: "<<endl;
    b1.show();
    cout<<"Details of b2: "<<endl;
    b2.show();
    cout<<"Details of b3: "<<endl;
    b3.show();
    
    return 0;
}
