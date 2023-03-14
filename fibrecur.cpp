#include<iostream>
using namespace std;

int fib(int a)
{
if(a<2){
    return 1;
}

return fib(a-1)+fib(a-2);
}



int main()
{
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
    cout<<"fibonacci series is:"<<fib(a);
}