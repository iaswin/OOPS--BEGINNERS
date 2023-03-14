#include<iostream>
using namespace std;
class test2;
class test1
{
    int a;
    int b;
    public:
    void getab()
    {
        cout<<"enter the value of a nd b"<<endl;
        cin>>a>>b;

    }
    friend class test2;
};
class test2
{
    public:
    void putab(test1 t1)
    {
        cout<<t1.a<<endl;
        cout<<t1.b;
    }
};
int main()
{
    test1 t2;
    test2 t3;
    t2.getab();
    t3.putab(t2);
}