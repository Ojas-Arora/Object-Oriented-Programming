//VirtualFunction
#include <iostream>
using namespace std;
class B{
    public:
    virtual void show(){
        cout<<"Base class"<<endl;
    }
};
class D:public B{
    void show(){
        cout<<"Derived class"<<endl;
    }
};
int main(){
    B *p;
    D d;
    p=&d;
    p->show();
}