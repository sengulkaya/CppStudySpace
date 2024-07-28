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


};


int main() 
{
	MyClass* p1 = new MyClass;
	std::cout << "p1: " << &p1 << "\n";
	auto p2 = new MyClass;
	auto *  p3 = new MyClass;
}