#include<iostream>
using namespace std;
class abc{
    int a,b;
    public:
    abc(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    abc(abc &old)
    {
        a=old.a;
        b=old.b;
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
     
};
int main()
{
    abc s1(10,20);
    abc s2(s1);
    s1.display();
    s2.display();
}