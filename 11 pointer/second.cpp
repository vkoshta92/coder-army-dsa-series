#include<iostream>
using namespace std;
int main(){
    int a=10;
    // // print the address of a
    // cout<<&a<<endl;
    // int *ptr= &a;
    // cout<<ptr<<endl;
    // cout<<sizeof(ptr)<<endl;
    // float m=2.6;
    // float *ptr1=&m;
    // cout<<ptr1<<endl;
    // cout<<sizeof(ptr1)<<endl;

    int *ptr= &a;
    cout<<ptr<<endl; // adress of a
    cout<<*ptr<<endl; // value inside a
    int b=20;
    ptr= &b;
    cout<<ptr<<endl; // address of b
cout<< *ptr<<endl; // inside valude of b

b=30;
cout<< *ptr<<endl; // 30
cout<<ptr<<endl;
}