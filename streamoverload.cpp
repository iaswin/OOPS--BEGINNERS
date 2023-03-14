#include<iostream>
using namespace std;
class test
{
    int id;
    public:
    test friend operator>>(istream &in,test t1){
        cout<<"enter student id"<<endl;
        in>>t1.id;
        cout<<"student id : "<<t1.id;
    }

};
int main()
{
    test t1;
    cin>>t1;
}