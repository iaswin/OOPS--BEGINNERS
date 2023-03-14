#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    void get()
    {
        cout<<"enter the element"<<endl;
        cin>>a;


    }
    test friend operator>(test t1,test t2);
};
test operator>(test t1,test t2)
{
    if(t1.a>t2.a)
    {
        cout<<"t1 is bigger"<<endl;
    }
    else{
        cout<<"t2 is bigger"<<endl;
    }

} 
int main()
{
    test t1,t2;
    t1.get();
    t2.get();
    t1>t2;
}