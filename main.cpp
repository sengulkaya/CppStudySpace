#include <vector>
#include <iostream>


class MyClass
{
public:
	MyClass()
	{

		std::cout << "default ctor" << this << "\n";
	}

	explicit MyClass(int x) // making this explicit common practice
	{
		std::cout << "MyClass(int x) ctor" << this << "\n";

	}


	~MyClass()
	{
		std::cout << "dtor" << this << "\n";

	}
};


class MyClassPtr
{
public:
	MyClassPtr(MyClass* p) : pm{ p }
	{

	}

	~MyClassPtr()
	{
		delete pm;
	}

private:
	MyClass * pm;
};




int main() 
{
	std::cout << "main baþladý" << "\n";
	{
		MyClassPtr ptr = new MyClass;
	}
	std::cout << "main devam" << "\n";
}