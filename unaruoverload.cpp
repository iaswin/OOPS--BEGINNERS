#include<iostream>
using namespace std;
 class test
 {
    int a;
    public:
    test()
    {
        a=0;
    }
    void operator++()
    {
        a++;
    }
     void operator--()
    {
        a--;
    }
    void show()
    {
        cout<<a;
        
    }
 };
 int main()
 {
    test t1;
    ++t1;
    t1.show();
    cout<<endl;
    --t1;
    t1.show();
 }