#include<iostream>
using namespace std;
class test
{
    int id;
    char name[20];
    public:
    test()
    {
        cout<<"enter name and id"<<endl;
        cin>>id>>name;
    }
    ~test()
    {
       cout<<id;
       cout<<name; 
    }


};
int main()
{
    test t1;
}