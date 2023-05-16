//FunctionTemplate
#include<iostream>
using namespace std;
template<class T>
float Average(T a,T b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a=Average(7,2);
    cout<<"Average of these numbers is "<<a<<endl;
    return 0;
}
