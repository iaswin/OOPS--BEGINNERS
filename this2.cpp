#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void get(int a,int b)
    {
        this->a=a;
        this->b=b;

    }
    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    test t1;
    t1.get(10,2);
    t1.show();
}