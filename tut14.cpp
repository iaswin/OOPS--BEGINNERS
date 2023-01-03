#include<iostream>
using namespace std;
struct mark
{
   int rollno;
    int mark;

};
struct student
{
   string name;
   int age;
   mark roll;

};
int  main()
{
    struct student a;
    struct mark b;
    cout<<"enter name "<<endl;
    cin>>a.name;
    cout<<a.name<<endl;
    cout<<"enter age"<<endl;
    cin>>a.age;
    cout<<a.age<<endl;
    cout<<"enter roll no"<<endl;
    cin>>a.roll.rollno;
    cout<<a.roll.rollno<<endl;
    cout<<"enter mark "<<endl;
    cin>>a.roll.mark;
    cout<<a.roll.mark<<endl;
    cout<<"name   "<<a.name<<" age  "<<a.age<<" roll no  "<<a.roll.rollno<< " mark  "<<a.roll.mark<<endl;



}

