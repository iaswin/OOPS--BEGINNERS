#include<iostream>
using namespace std;
class shape
{
    public:
    int d1,d2;
    void get()
    {
        cout<<"enter the sides"<<endl;

        cin>>d1>>d2;
    }
    
    virtual float area()=0;
};
class triangle:public shape
{
    public:
    virtual float area()
    {
        cout<< d1*d2;

    }
};
int main()
{
    triangle t1;
    t1.get();
    t1.area();
}
