#include <vector>
#include <iostream>
class MyClass
{
public:
	MyClass()
	{

		std::cout << "default ctor" << this <<  "\n";
	}

	explicit MyClass(int x) // making this explicit common practice
	{
		std::cout << "MyClass(int x) ctor" << this << "\n";

	}
	explicit MyClass(int x, int y) // making this explicit common practice
	{ 
		std::cout << "MyClass(int x, int y) ctor x = " << x << "y= " << y << "\n";

	}


	~MyClass()
	{
		std::cout << "DESTRUCTOR" << this << "\n";

	}


	MyClass(const MyClass& ref)
	{
		std::cout << "copy ctor" << this << "\n";
	}


	MyClass& operator=(const MyClass& ref)
	{
		std::cout << "copy assign" << this << "\n";
	}

	MyClass(MyClass&& ref)
	{
		std::cout << "move ctor" << this << "\n";
	}


	MyClass& operator=(MyClass&& ref)
	{
		std::cout << "move assign" << this << "\n";
	}

	void foo(){}


};


int main() 
{
	MyClass* p1 = new MyClass;
	MyClass* p2 = new MyClass();
	MyClass* p3 = new MyClass{};
	MyClass* p4 = new MyClass(2, 6);
	MyClass* p5 = new MyClass{ 2, 6 };

	// why not malloc but operator new bcs operator new can be overloaded and it throws exception unlike malloc

	p1->foo();
	(*p1).foo();
}