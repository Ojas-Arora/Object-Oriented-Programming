//  Hybrid Inheritance
#include <iostream>
using namespace std;
class A
{
	protected:
	int a;
	public:
	void geta()
	{
	cout << "Enter the value of 'a' : ";
	cin>>a;
	}
};
	
class B : public A
{
	protected:
	int b;
	public:
	void getb()
	{
	cout << "Enter the value of 'b' : ";
	cin>>b;
	}
};
class C
{
	protected:
	int c;
	public:
	void getc()
	{
		cout << "Enter the value of c is : ";
		cin>>c;
	}
};
	class D : public B, public C
{
	protected:
	int d;
	public:
	void mul()
	{
		geta();
		getb();
		getc();
		cout << "Multiplication of a,b,c is : " <<a*b*c;
	}
};


int main()
{
	D d;
	d.mul();
	return 0;
}
