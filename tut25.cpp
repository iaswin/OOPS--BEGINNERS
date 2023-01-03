#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public: 
    void add(int c,int d)
    {
        a=c;
        b=d;
    }
   void comp(complex e,complex f)
    {
        a=e.a+f.a;

        b=e.b+f.b;
    }
    void display()
    {
        cout<<a<<"+"<<b<<endl;
    }
};

int main()
{
    complex n1,n2,n3;
    n1.add(5,6);
    n1.display();
    n2.add(2,3);
    n2.display();
    n3.comp(n1,n2);
    n3.display();
  
}