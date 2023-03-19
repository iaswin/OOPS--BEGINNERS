#include <iostream>
using namespace std;
class abc
{
    public:
    int id;
    char name[20];
    void get()
    {
        cout<<"enter name and id";
        cin>>name>>id;

    }
    void show()
    {
        cout<<"name is"<<name;
        cout<<"id is"<<id;
    }
};
int main()
{
    abc ob[20];
    int n;
    cout<<"enter no of objects";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        ob[i].get();
    }
    for(int i=0;i<=n;i++)
    {
        ob[i].show();
    }
    
    


}
