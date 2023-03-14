#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[10],course[20];
    float fee;
    public:
    student(char name[20],char course[10])
    {
        strcpy(this->name,name);
        strcpy(this->course,course);
        fee=0;
    }
    student(char name[20],char course[10],int fee)
    {
        student::student(name,course);
        this->fee=fee;
    }
};
int main()
{
    student s1("aswin","c++");
    student s2("raju","c++",500);
}