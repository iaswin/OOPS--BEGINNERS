#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{ 
    int num1,num2;
    cout<<"enter numbers";
    cin>>num1;
    cin>>num2;
    sum(num1,num2);
    cout<<"sum is  "<<sum(num1,num2);
    return 0;

}
