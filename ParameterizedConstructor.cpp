//ParameterizedConstructor
#include<iostream>
using namespace std;
class student{
    int a,b;
    public:
    student(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a="<<a<<endl;
         cout<<"b="<<b<<endl;
    }
};
int main(){
    student s(10,20);
    s.show();
}