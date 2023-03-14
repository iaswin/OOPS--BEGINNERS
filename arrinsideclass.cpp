//student marks
#include<iostream>
using namespace std;
class mark
{
    int id,sub[6];
    char name[20];
    public:
    int get();
    int result();

};
int mark:: get()
{
    cout<<"enter id and name"<<endl;
    cin>>id>>name;
    cout<<"enter mark for 6 subject"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>sub[i];
    }
}
int mark:: result()
{
    int total=0;
    int avg=0;
    for(int i=0;i<6;i++)
    {
        total=total+sub[i];
    }
    avg=total/6;
    cout<<"average is"<<avg<<endl;
    cout<<total<<endl;
}


int main()
{
    mark m1[20];
    int n;
    cout<<"enter the no of student"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        m1[i].get();
    }
    for(int i=0;i<n;i++)
    {
        m1[i].result();
    }
    
    
}
