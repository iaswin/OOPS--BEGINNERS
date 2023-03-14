#include<iostream>
using namespace std;
class test
{
    int r;
    public:
    test()
    {
        r=5;
        cout<<"area is :"<<3.14*r*r<<endl;
    }
    test(int r)
    {
        cout<<"area is :"<<3.14*r*r;
    }
};
int main()
{
    test t1;
    test t2(10);
}