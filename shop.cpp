#include<iostream>
using namespace std;
int total;
class item
{
    char name[20];
    int quaty;
    int rate,amount;
    public:
    void get()
    {
        cout<<"enter the item,rate,quantity"<<endl;
        cin>>name>>rate>>quaty;

    }
    void print()
    {
        cout<<name<<endl;
        cout<<quaty<<endl;
        cout<<rate;
        amount=rate*quaty;
        total=amount+total;
    }
};
int main()
{
    item ab[10];
    int i;
    int n=0;
    int ch;
    do{
        ab[n].get();
        n++;
        cout<<"do yo want to continue"<<endl;
        cin>>i;
        
    }
    while(i==1);
   
     
    cout<<"total amount is :"<<total;
}
