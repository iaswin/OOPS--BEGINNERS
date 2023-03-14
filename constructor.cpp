#include<iostream>
using namespace std;
class student
{
    int id;
    char name[10];
    public:
    student()
    {
        cout<<"enter id and name"<<endl;
        cin>>id>>name;
    }
};
int main()
{
    student s1;
}