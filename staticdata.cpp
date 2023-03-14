#include<iostream>
using namespace std;
class test
{
    public:
    static int a;
    void get()
    {
        cout<<a<<endl;
    }
};
int test::a=100;
int main()
{
    test::a=10;
    cout<<test::a<<endl;
    test t1;
    t1.get();
}