#include<iostream>
using namespace std;
 class student
 {
    public:
    int id=2;
    char name[20];
    int display();
 };
int student::display()
 {
    cout<<id;

 }
 
 int main()
 {
    student s1;
    s1.display();
 }