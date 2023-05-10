//Multipleinheritance
#include<iostream>
using namespace std;
class B{
    protected:
    int x;
    public:
    void getdata(){
        cout<<"Enter x"<<endl;
        cin>>x;
    }
};
   class A{
    protected:
    int y;
    public:
    void show(){
        cout<<"Enter y"<<endl;
        cin>>y;
    }
   };
class C:public B,public A{
    public:
    void display(){
        cout<<"Add="<<x+y<<endl;
    }
};
int main(){
    C ab;
    ab.getdata();
    ab.show();
    ab.display();
    return 0;
}