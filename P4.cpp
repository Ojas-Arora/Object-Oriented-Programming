/* Write a program to design a class having name student with data members name,age,roll no 
by using member functions to get and display data using scope resolution operator */
#include<iostream>
using namespace std;
class student{
    char name[30];
    int rollno;
    int age;
    public:
    void getdata();
    void displaydata();
};
void student::getdata(){
        cout<<"Enter name of student"<<endl;
        cin>>name;
        cout<<"Enter roll no of student"<<endl;
        cin>>rollno;
        cout<<"Enter age of student"<<endl;
        cin>>age;
    } 
    void student::displaydata(){
        cout<<"Enter name of student:"<<name<<endl;
        cout<<"Enter roll no of student:"<<rollno<<endl;
        cout<<"Enter age of student:"<<age<<endl;
    }
int main(){
    student s;
    s.getdata();
    s.displaydata();
    return 0;
}
