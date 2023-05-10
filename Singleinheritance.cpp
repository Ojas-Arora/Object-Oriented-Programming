//Single inheritance
#include<iostream>
using namespace std;
class B{
    protected:
    int x,y;
    public:
    void getdata(){
        cout<<"Enter x"<<endl;
        cin>>x;
    }
    void show(){
        cout<<"Enter y"<<endl;
        cin>>y;
    }
};
class D:public B{
    public:
    void putdata(){
        cout<<"Sum is="<<x+y<<endl;
    }
};
int main(){
    D d;
    d.getdata();
    d.show();
    d.putdata();
}