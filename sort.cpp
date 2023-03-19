#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    char name[20];
    

};
class btech:public student{
    public:
    int mark;
    void get()
    {
    cout<<"enter id and name"<<endl;
    cin>>id>>name;
    cout<<"enter the mark "<<endl;
    cin>>mark;
    }
    void sort(btech b[],int n)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-j-1;k++)
            {
                if(b[k].mark>b[k+1].mark)
                {
                    btech temp=b[k];
                    b[k]=b[k+1];
                    b[k+1]=temp;
                }
            }
        }
        
    }
    void show(btech b[],int n)
    {
        cout<<"sorted mark"<<endl;
        for(int z=0;z<n;z++)
        {
            cout<<b[z].name<<endl;
            cout<<b[z].id<<endl;
            cout<<b[z].mark<<endl;
        }
    }

};
class mtech:public student
{
    public:
    int mark1;

    void get1(){
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the id"<<endl;
        cin>>id;
        cout<<"enter the mark"<<endl;
        cin>>mark1;

    }
    void sort1(mtech m1[],int si)
    {
        for(int i=0;i<si-1;i++)
        {
            for(int j=0;j<si-i-1;j++)
            {
                if(m1[j].mark1>m1[j+1].mark1)
                {
                    mtech temp;
                    temp=m1[j];
                    m1[j]=m1[j+1];
                    m1[j+1]=temp;
                }
            }
        }
        
    }
       void show1(mtech m1[],int si)
    {
        cout<<"sorted mark"<<endl;
        for(int z=0;z<si;z++)
        {
            cout<<m1[z].name<<endl;
            cout<<m1[z].id<<endl;
            cout<<m1[z].mark1<<endl;
        }
    }


};

int main()
{
    btech b1[100],b2;
    mtech m2[50],m3;
    int p;
    int h,l;
    cout<<"enter 1 for btech 2 for mtech"<<endl;
    cin>>p;
    switch(p)
    {
        case 1:
        cout<<"enter the no of student want to enter"<<endl;
    cin>>h;
    for(int i=0;i<h;i++)
    {
        b1[i].get();
    }
    
    b2.sort(b1,h);
    b2.show(b1,h);
    break;
    case 2:
    cout<<"enter the no of student want to enter"<<endl;
    cin>>l;
    for(int i=0;i<l;i++)
    {
        m2[i].get1();
    }
    
    m3.sort1(m2,l);
    m3.show1(m2,l);
    break;
    default:
    cout<<"error";

    }
    

}