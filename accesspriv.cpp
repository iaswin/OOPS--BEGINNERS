#include<iostream>
using namespace std;
class test
{
    int a,b;
    void get()
    {
        cout<<"enter the numbers";
        cin>>a;
        cin>>b;

    }
    public:
    void show()
    {
        get();
        cout<<a<<endl;
        cout<<b<<endl;
    }

};

int main()
{
    test t1;
    t1.show();
}