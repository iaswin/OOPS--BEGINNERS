#include<iostream>
using namespace std;
 inline int sum(int num1=2,int num2=3)
{
    cout<<"the value of a,b before"<<num1<<endl<<num2<<endl;
    static int num4=0;
    int num3=num1+num2+num4;
    return num3;

}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
 
    cout<<"the value of a,b before"<<a<<endl<<b<<endl;
    sum(a,b);
    cout<<"after"<<a<<endl<<b<<endl;
    cout<<sum(a,b)<<endl;;
}