#include<iostream>
using namespace std;
class car{
    int a,b;
    public:
    car();
     void display()
    {
        cout<<a<<"+ i"<<b<<endl;
    }
};
 car::car()//default constructor
{
    a=10;
    b=0;
}
int main()
{
    car c1;
    c1.display();

}