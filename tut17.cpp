#include<iostream>
using namespace std;
int sum(int a,int b)
{
    static int c=0;
    c=c+1;
    return a+b+c;
}
int main()
{
    int c,d;
    cout<<"enter the nummbers";
    cin>>c;
    cin>>d;
    sum(c,d);
    cout<<"sum :"<<sum(c,d);
     cout<<"sum :"<<sum(c,d);
      cout<<"sum :"<<sum(c,d);

}