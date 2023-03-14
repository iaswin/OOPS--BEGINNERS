#include<iostream>
using namespace std;
int product(int a,int b)
{
    static int c=0;
    c=c+1;
    return(a*b*c);

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"product is :"<<product(a,b)<<endl;
    cout<<"product is :"<<product(a,b)<<endl;
    cout<<"product is :"<<product(a,b)<<endl;
    

}