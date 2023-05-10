//Friend Function
#include <iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    void getvalue(){
        a=20;
        b=45;
    }
    friend float sum(A s);
};
float sum(A s){
    return float(s.a+s.b);
}
int main(){
    A M;
    M.getvalue();
    cout<<"Sum value="<<sum(M)<<endl;
    return 0;
}