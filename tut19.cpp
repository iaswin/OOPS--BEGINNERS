#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c=a+b;
    return c;

}
int add(int a,int b,int c)
{
    int d=a+b+c;
    return d;

}
int main()
{
    cout<<add(5,6)<<endl;
    cout<<add(5,6,7)<<endl;

}