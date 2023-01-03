#include<iostream>
using namespace std;
class student
{
    string a;
    public:
    student (string n)
    {
        a=n;
    }
    student(student&obj)
    {
        a=obj.a;
        cout<<obj.a;
    }

    void display()
    {
        cout<<a;
    }
};
int main()
{
    student s1("tom");
    //s1.display();
    student s2(s1);
    s2.display();
}