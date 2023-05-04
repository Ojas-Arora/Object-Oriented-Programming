//Write a program to swap the variables using call by value
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int temp=0;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is"<<a<<endl;
    cout<<"b is"<<b<<endl;
    return 0;
}