#include<iostream>
using namespace std;
class stu{
    int id;
    char name[20];
    public:
    void readstu()
    {
        cout<<"enter stuid"<<endl;
        cout<<"enter stud name";
        cin>>id>>name;

    }
    void showstud();
};
void stu::showstud()
{
    cout<<"student id"<<id<<endl;
    cout<<"name is:"<<name;
}


int main()
{
    stu s1;
    s1.readstu();
    s1.showstud();
}