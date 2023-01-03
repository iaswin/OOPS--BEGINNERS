#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void set(int n1,int n2)
    {
        a=n1;
        b=n2;

    }
    void display()
    {
        cout<<a<<"+ i"<<b<<endl;
    }
    
    friend Complex sum1(Complex c1,Complex c2);
};
 Complex sum1(Complex c1,Complex c2)
{
    Complex o3;
    o3.set((c1.a+c2.a),(c1.b+c2.b));
    return o3;
}
int main()
{
    Complex c1,c2,h;
    c1.set(3,4);
    c2.set(5,6);
    c1.display();
    c2.display();
   h=sum1(c1,c2);
    h.display();


}