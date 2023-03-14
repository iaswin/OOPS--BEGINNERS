#include<iostream>
using namespace std;
class test2;
class test1
{
    int a;
    public:
    void geta()
    {
        cout<<"enter the element"<<endl;
        cin>>a;


    }
    friend void big(test1,test2);
     
};
class test2
{
    int b;
    public:
    void getb()
    {
        cout<<"enter the element"<<endl;
        cin>>b;


    }
    friend void big(test1,test2);
     
};
void big(test1 t1,test2 t2)
{
    if(t1.a>t2.b)
    {
        cout<<"a"<<endl;
    }
    else{
        cout<<"b"<<endl;
    }
}

int main()
{
    test1 t4;
    test2 t3;
    t4.geta();
    t3.getb();
    big(t4,t3);
}