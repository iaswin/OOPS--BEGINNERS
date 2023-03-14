#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void show()
    {
        a=10;
        b=20;
        cout<<"object address"<<this<<endl;
        cout<<"the value is"<<this->a;
    }
};
int main()
{
    test t1;
    t1.show();
}