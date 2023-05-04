//Write a program to swap the variables using call by reference12
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a;
    int b;
    int temp=0;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    swap(a,b);
    cout<<"a is"<<a<<endl;
    cout<<"b is"<<b<<endl;
    return 0;
}