#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=4,b=4;
    cout<<"a+b:"<<a+b<<"\n";
    cout<<"a-b:"<<a-b<<"\n";
    cout<<"a/b:"<<a/b<<"\n";
    cout<<"a*b:"<<a*b<<"\n";
    cout<<"a++:"<<a++<<"\n";
    cout<<"a--:"<<a--<<"\n";
    cout<<"--a:"<<--a<<"\n";
    cout<<"++a:"<<a+1<<"\n";
    cout<<(a&&b==4)<<endl;
    cout<<(a||b==4)<<endl;
    cout<<((!a&&b==4))<<endl;
    string str="hello";
    string str1="aswin";
    string str3=str+str1;
    string str4=str.append("ram");
    cout<<str3<<endl;
    cout<<str4;
    }

