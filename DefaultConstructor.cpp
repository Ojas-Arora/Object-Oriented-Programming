//Default Constructor
#include<iostream>
using namespace std;
class student{
    int age;
    public:
    student(){
        cout<<"Enter age"<<endl;
        cin>>age;
    }
    void display(){
        cout<<"AGE="<<age<<endl;
    }
};
int main(){
    student s;
    s.display();
    return 0;
}