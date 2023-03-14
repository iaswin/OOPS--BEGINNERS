#include<iostream>
using namespace std;
class student
{
    int id;
    int age;
    public:
    student(int id1=2,int age1=30)
    {
        id=id1;
        age=age1;
        cout<<id<<age<<endl;
    }
};
int main()
{
    student s1;
    student s2(10,20);
}