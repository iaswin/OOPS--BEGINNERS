#include<iostream>
using namespace std;
class bank
{
    int accno;
    char name[20];
    public:
    void get()
    {
        cout<<"enter acc no and name"<<endl;
        cin>>accno>>name;

    }
    void show()
    {
        cout<<"account id and name is: "<<accno<<name<<endl;
    }
};
class saving:public bank
{
    int be;
    public:
    void bal(){
        cout<<"enter balance"<<endl;
        cin>>be;

    if(be<500)
    {
        cout<<"keep minimum balance"<<endl;
    }


    }
    
};
class current:public bank{
    int b2;
    public:
    void bala()
    {
        cout<<"enter balance"<<endl;
        cin>>b2;
        if(b2<100){
        cout<<"it is your least balance"<<endl;
    }

    }
    
};
int main()
{
    int i;
    cout<<"enter 1 for saving and 2 for current"<<endl;
    cin>>i;
    if(i==1)
    {
        saving s1;
        s1.get();
        s1.show();
        s1.bal();

    }
    else if(i==2)
    {
        current c1;
        c1.get();
        c1.show();
        c1.bala();

    }
    else{
        cout<<"invalid"<<endl;
    }
}