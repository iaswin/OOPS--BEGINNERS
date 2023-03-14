#include<iostream>
using namespace std;
class stu
{
    int id;
    char name[10];
    public:
    void get()
    {
    cout<<"enter name and id"<<endl;
    cin>>id>>name;
    }
    void show()
    {
        cout<<"id"<<id;
        cout<<"name"<<name;
    } 


};
class mark:public stu
{
   public:
    int m1,m2,m3;
    void total()
    {
        cout<<"enter the mark"<<endl;
        cin>>m1>>m2>>m3;

    }
};
class result:public mark{
    int totall;
    public:
    void tot()
    {
        totall=m1+m2+m3;
        cout<<"total mark"<<totall;
    }
};
int main()
{
    result r1;
    r1.get();
    r1.show();
    r1.total();
   
    r1.tot();
}