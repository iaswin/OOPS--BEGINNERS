#include <iostream>

using namespace std;
int fact(int n)
{

    return n*fact(n-1);
}
int main()
{
    int a;
    cout<<"enter the number";
    cin>>a;
    fact(a);
    cout<<"the factorial is :"<<fact(a);
}