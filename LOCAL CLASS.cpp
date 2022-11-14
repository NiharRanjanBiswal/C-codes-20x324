//LOCAL CLASS IN C++//
#include<iostream>
using namespace std;
int x=200;
void func()
{
    class test  //local class
    {
        int x;
        public:
        void show()
        {
            x=100;     
            cout<<"Local x ="<<x<<endl;
            cout<<"Global x ="<<::x<<endl;
        }
    };
test t;
t.show();
}
int main()
{
    func(); //calling

    return 0;
}
