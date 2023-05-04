/*Write a program for swapping variables using class swap having two data members and three member functions*/
#include<iostream>
using namespace std;
class swap{
    int x,y;
    public:
    void values(){
        cout<<"Enter values of x before swapping"<<endl;
        cin>>x;
        cout<<"Enter values of y before swapping"<<endl;
        cin>>y;
    }
void interchange(){
    x=x+y;
    y=x-y;
    x=x-y;
}
void display(){
    cout<<"Value of x after swapping"<<x<<endl;
    cout<<"Value of y after swapping"<<y<<endl;
 }
}c;
int main(){
    c.values();
    c.interchange();
    c.display();
    return 0;
}