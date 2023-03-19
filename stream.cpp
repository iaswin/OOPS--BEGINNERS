#include<iostream>
using namespace std;
class abc
{
    int a;
    public:
   friend abc operator>>(istream &in,abc s2)
    {
        cout<<"enter";
        in>>s2.a;
        cout<<s2.a;
    }
};
int main()
{
    abc s;
    cin>>s;
}
