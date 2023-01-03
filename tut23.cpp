#include<iostream>
using namespace std;
class shop
{
    int item[100];
    int price[100];
    public: int c;

    public:
    void set();
    void display();
    void counter(){
       c=0;
    }
};
void shop::set()
{
     counter();
    cout<<"enter id";
    cin>>item[c];
    cout<<"enter price";
    cin>>price[c];
    c++;
}
void shop::display()
{
    counter();
    cout<<item[c];
    cout<<price[c];
}
int main()
{
    shop p1;
    p1.set();
    p1.set();
   p1.display();
}