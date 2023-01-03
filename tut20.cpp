#include<iostream>
using namespace std;
class car
{
    private : int a,b,c;
    public: int d,e;
    void set(int a1,int b1,int c1);
    void display()
    {
        cout<<a;
        cout<<b;
        cout<<c;
        cout<<d;
        cout<<e;

    }

};
void car::set(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;

}
int main()
{
    car obj;

    obj.set(1,2,3);
    obj.d=4;
    obj.e=5;
    obj.display();

}