#include<iostream>
using namespace std;
class car{
    int a,b;
    public:
    car(int x,int y);
     void display()
    {
        cout<<a<<"+ i"<<b<<endl;
    }
    ~car();
};
car::~car()
{
    cout<<"destructor called";
}
 car::car(int x,int y)//default constructor
{
    a=x;
    b=y;
}
int main()
{
    car c1(4,6);
    c1.display();

}