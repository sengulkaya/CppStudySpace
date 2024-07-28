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
		std::cout << "copy assign" << "\n";
	}

	MyClass(MyClass&& ref)
	{
		std::cout << "move ctor" << "\n";
	}


	MyClass& operator=(MyClass&& ref)
	{
		std::cout << "move assign" << "\n";
	}


};

void foo(MyClass x) 
{
	std::cout << "foo()\n";
}

int main() 
{

	foo(MyClass{ 45});


}