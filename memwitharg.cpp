#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    int eid;
    char ename[20];
    public:
    void get(int id,char name[10]);
    void display();

};
void emp::get(int id,char name[10])
{
    eid=id;
    strcpy(ename,name);
}
void emp::display()
{
    cout<<"Employee id ::"<<eid<<endl;
    cout<<"employee name ::"<<ename<<endl;
}

int main()
{
    emp e1;
    e1.get(5,"aswin");
    e1.display();
}