#include <iostream>

class MyClass
{
public:
	MyClass()
	{

	 std::cout << "default ctor" << "\n";
	}

	explicit MyClass(int x) // making this explicit common practice
	{
		std::cout << "MyClass(int x) ctor" << "\n";

	}

	~MyClass()
	{
		std::cout << "DESTRUCTOR" << "\n";

	}


	MyClass(const MyClass& ref)
	{
		std::cout << "copy ctor" << "\n";

	}

	MyClass & operator=(const MyClass& ref)
	{
		std::cout << "copy assignment" << "\n";
		return *this;
	}


	MyClass(MyClass&& ref)
	{
		std::cout << "move ctor" << "\n";
	}

	MyClass & operator=(MyClass&& ref)
	{
		std::cout << "move assignment" << "\n";
		return *this;
	}
};

void foo(MyClass x) // call by value. so move ctor will be called for x. but what if we eliminate move ctor then copy ctor will be called(BOOM copy ctor is NOT called!)
{
	std::cout << "foo()\n";
}

int main() 
{
	//copy elision ; elision is like elimination
	foo(MyClass{}); 
}