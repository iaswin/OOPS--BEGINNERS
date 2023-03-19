#include<iostream>
using namespace std;
class menu
{
    public:
    int bur;
    int sand;
    int pizza;
   
    void get(){
        cout<<"enter the quantity of burger,pizza,sandwich"<<endl;
        cin>>bur>>sand>>pizza;

    }
};
class price:public menu{
    int total=0;
    
    public:
    void tot(){
        cout<<"price of a burger : 100\nprice of sandwich is: 120\nprice of pizza :130"<<endl;
        
  

    }
    


};

int main()
    {
        price p1;
        p1.get();
        p1.tot();
        
    }
