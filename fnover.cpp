#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;

}int sum(int a,int b,int c){
    return a+b+c;

}
int sum(double a,double b){
    return a+b;

}

int main(){
    cout<<sum(10,20)<<endl;
    cout<<sum(10,2,20)<<endl;
    cout<<sum(12.2,13.3);
}
