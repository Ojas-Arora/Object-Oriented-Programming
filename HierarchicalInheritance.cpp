// HierarchicalInheritance
#include<iostream>
using namespace std;
class A 
{
public:
void getdata() {
	cout<<"class A"<<endl;
}
};
class B : public A 
{
public:
void show() {
	cout<<"class B"<<endl;
}
};

class C : public A 
{
public:
void display() {
	cout<<"class C"<<endl;
}
};

int main() {
B b; 
cout<<"calling from B: "<<endl;
b.show();
b.getdata();
	
C c; 
cout<<"calling from C: "<<endl;
c.display();
c.getdata();
return 0;
}

