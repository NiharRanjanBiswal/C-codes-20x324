//C++ Program for implementation of static data members//

#include<iostream>
using namespace std;

class sample
{
    static int count;
    public:
    sample()    ///constructor
    {
        count++;
        cout<<count<<" object created"<<endl;
    }
    ~sample()///drstructor
    {
        cout<<count<<"object deleted"<<endl;
        count--;
    }
};
int sample::count;//defined

int main()
{
    sample s1,s2,s3;
    return 0;
}
