#include<iostream>
using namespace std;
int sum(int a,int b,int c=3)
{
    return (a+b+c);

}
int main()
{
    cout<<"sum is:"<<sum(100,1,1)<<endl;
    cout<<"sum is:"<<sum(100,2)<<endl;
    cout<<"sum is"<<sum(1,2)<<endl;
}