#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b=&a;

    int **c=&b; //pointer to pointer
    int***d=&c;
    cout<<"the address of a "<<&a<<endl;
    cout<<"the address of a "<<b<<endl;
    cout<<"the value at b "<<*b<<endl;
    cout<<"the value at c "<<**c<<endl;
    cout<<"the value at d "<<***d<<endl;





    
}