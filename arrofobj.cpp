#include<iostream>
using namespace std;
class text
{
    int studid;
    char name[20];
    public:
    void get()
    {
        cout<<"enter student id   and    stuedent name   "<<endl;
        cin>>studid>>name;

    }
    void disp(){
        cout<<"id"<<studid<<endl;
        cout<<"name"<<name<<endl;
    }
};
int main()
{
    text s1[50];
    int n;
    cout<<"enter how many student record want to store  "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s1[i].get();
    }
    cout<<"student details"<<endl;
    for(int i=0;i<n;i++)
    {
        s1[i].disp();
    }
}