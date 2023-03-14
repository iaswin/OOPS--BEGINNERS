#include<iostream>
using namespace std;
class abc
{

    int a,b;
    public:
    friend void print(abc);
};
void print(abc s)
{
    s.a=10;
    s.b=33;
    cout<<"a"<<s.a;
    cout<<"b"<<s.b;
}
int main()
{
    abc s1;
    print(s1);
}