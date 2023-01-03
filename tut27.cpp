#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    friend class calculator;
    public:
    void set(int d,int c)
    {
        a=d;
        b=c;

    }
    void display()
    {
        cout<<a<<"+ i"<<b<<endl;
    }

};
class calculator
{
    public:
    int add(int a,int b)
    {
        return(a+b);
    }
    int sumReal(Complex c1,Complex c2)
    {
        return(c1.a+c2.a);
    }
    
    int sumComp(Complex c1,Complex c2)
    {
        return(c1.b+c2.b);
    }

};


int main()
{
    Complex c1,c2;
    c1.set(5,6);
    c2.set(3,4);
    c1.display();
    c2.display();
    calculator calc;
    int h=calc.sumReal(c1,c2);
    int k=calc.sumComp(c1,c2);
    cout<<"the complex no is "<<h<<"+ i"<<k;

    return 0;
}
