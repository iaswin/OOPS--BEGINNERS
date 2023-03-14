#include<iostream>
using namespace std;
class big
{
    int a,b;
    public:
    int get(int c,int d);
    int show();
    int big1();

};
int big:: get(int c,int d){
    a=c;
    b=d;
 }
int big::show()
 {
    cout<<a<<endl;
    cout<<b<<endl;

 }
 int big::big1()
 {
    if(a>b)
    {
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
 }

 int main()
 {
    big b1;
    b1.get(10,4);
    b1.show();
    int max=b1.big1();
    cout<<"MAX:"<<max<<endl;

 }