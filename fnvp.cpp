#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    

}
int main()
{
    int x=5,y=4;
    swap(x, y);
    cout<<x<<y<<endl;
    
}