#include<iostream>
using namespace std;
class bank
{
    int p;
    int y;
    int r;
    int f;
    public:
    bank(int p1,int y1,int r1);
    show();
};
bank::bank(int p1, int y1, int r1)
{
    p=p1;
    y=y1;
    r=r1;
    f=p1;
    for(int i=0;i<y1;i++)
    {
        f=f*(1+f);
    }

}
bank::show()
{
    cout<<"principal amount"<<p<<endl;
    cout<<"return"<<y<<endl;
    cout<<"return value"<<f<<endl;
}
int main()
{

int p,y,r,f;
cout<<"enter p y r f"<<endl;
cin>>p>>y>>r;
bank b1(p,y,r);
b1.show();
}