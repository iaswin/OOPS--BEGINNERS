#include<iostream>
using namespace std;
int main(){
int age;
cout<<"tell me your age"<<endl;
cin>>age;

/*if(age>80)
{
cout<<"you are eliminated";
}
else if(age<=10)
{
    cout<<"you are kid";

}
else{
    cout<<"welcome";
}

}*/
switch(age)
{
    case 18:
    { 
        cout<<"you are 18";
        break;


    }
    default:
    {
        cout<<"error";
    }
   
}
}
