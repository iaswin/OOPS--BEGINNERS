#include<iostream>
#include<string>
using namespace std;
class binary{
string s;
public: void read();
void check();
void comp();
void display();


};
void binary::read()
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::check()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"error";
            exit(0);
        }
    }
}
void binary::comp()
{
    check();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    
    else
    {
        s.at(i)='1';
    }
    
    }
    }
void binary::display()
{
    for(int i=0;i<s.length();i++)
    {
       cout<<s.at(i)<<endl;
    }
}
int main()
{
    binary b;
    b.read();
    b.check();
    b.comp();
    b.display();

}