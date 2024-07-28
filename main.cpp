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
		std::cout << "dtor" << this << "\n";

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

	void foo()
	{
		std::cout << "MyClass foo" << this << "\n";
	}


};


int main() 
{
	std::cout << "main 1" << "\n";

	std::make_unique<MyClass>();
	auto p1 = std::make_unique<MyClass>();


	 //p1 -> ~MyClass() after calling the objetcs dtor and then operator delete function is called. 

	p1->foo();

	// 
	delete p1;

	std::cout << "main 2" << "\n";

	
}