#include<iostream>
using namespace std;
class abc
{
    public:
    void get()
    {
        cout<<"its base"<<endl;
    }
};
class def:public virtual abc
{
    public:
    void get1()
    {
        cout<<"its base1"<<endl;
    }
};
class gh:public virtual abc
{
    public:
    void get2()
    {
        cout<<"its base2"<<endl;
    }
};
class ij:public gh,public def
{
    public:
    void get()
    {
        cout<<"its base3"<<endl;
    }
};

int main()
{
    ij s1;
    s1.get();
    s1.get1();
    s1.get2();
}