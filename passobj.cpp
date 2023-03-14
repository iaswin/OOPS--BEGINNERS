#include<iostream>
using namespace std;
class maxx
{
    private:
    int a;
    public:
    void get(int b)
    {
        a=b;
        
    }
    void display()
    {
        cout<<"the value is:"<<a<<endl;
    }
    int big(maxx o1,maxx o2);
};
    
int maxx:: big(maxx o1,maxx o2)
{
        if(o1.a>o2.a)
        {
            return o1.a;
        }
        else
        {
            return o2.a;
        }
        
}
int main()

{
    maxx s1,s2,s3;
    s1.get(20);
    s1.display();
    s2.get(10);
    s2.display();
    int max=s3.big(s1,s2);
    cout<<"maximum is:"<<max<<endl;
    
    
    
}