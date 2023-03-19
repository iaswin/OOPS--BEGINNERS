#include<iostream>
using namespace std;
int total=0;
class rest
{
    public:
    int  burger,pizza,amount;
   void get1()
   {
    cout<<"enter the quantity of burger"<<endl;
    cin>>burger;
    cout<<"the amount of one burger is:150"<<endl;
    amount=burger*150;
    total=total+amount;
   }
  
};

int main()
{
    rest r1[100];
    int i=0;
    int j;
    char p;
    do{

    
    cout<<"enter b for burger,p for pizza"<<endl;
    cin>>p;
    switch(p)
    {

        case 'b':
        r1[i].get1();
        break;
        default:
        cout<<"error"<<endl;


    }
    cout<<"do you want to continue press 1"<<endl;
    cin>>j;
    i++;
    }
    while(j==1);
    cout<<"total is"<<total;
    
   
}