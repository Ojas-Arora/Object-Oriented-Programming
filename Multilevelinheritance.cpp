//Multilevelinheritance
#include <iostream>
using namespace std;
class A {
public:
	int a;
	void getdata()
	{
		cout << "Enter value of a: ";
		cin >> a;
	}
};
class B : public A {
public:
	int b;
	void show()
	{
		cout << "Enter value of b: ";
		cin >> b;
	}
};
class C : public B {
private:
	int c;
public:
	void display()
	{
		cout << "Enter value of c: ";
		cin >> c;
	}
	void sum()
	{
		int ans = a + b + c;
		cout << "sum: " << ans;
	}
};
int main()
{
	C obj;
	obj.getdata();
	obj.show();
	obj.display();
	obj.sum();
	return 0;
}
