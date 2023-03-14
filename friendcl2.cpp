#include<iostream>
using namespace std;
class author
{
    char aname[20];
    public:
    friend class book;

};
class book{
    int price;
    char bname[20];
    author t1;
    public:
    void getdata()
    {
        cout<<"enter author name";
        cin>>t1.aname;
        

        cout<<"enter bookname ";
        cin>>bname;
        cout<<"price";
        cin>>price;
    }
    void display()
    {
        cout<<t1.aname;
        cout<<price;
        cout<<bname;
    }

};
int main()

{
    book b1;

    b1.getdata();
    b1.display();
}