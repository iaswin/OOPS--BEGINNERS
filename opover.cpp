
#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void get()
    {
        cout<<"enter the element "<<endl;
        cin>>a;
    }
   test operator ==(test t8)
{
    
        if(a==t8.a)
        {
            cout<<"both are equal"<<endl;
        }
        else{
            cout<<"both are not equal"<<endl;
        }
}
};

int main()
{
    test t1,t2;
    t1.get();
    t2.get();
    t1==t2;
}