#include <iostream>

class MyClass
{
public:
	MyClass() = default;
	MyClass(int x)
	{
		std::cout << "MyClass (int) x: " << x << "\n";
		std::cout << "this pointer value : " << this << "\n";
	}

	MyClass& operator=(const MyClass& ref)
	{
		std::cout << "copy assignment this : " << this << "\n"; // here this will be mx but ref will bind to temporary object bcs there is no move assignment
		std::cout << "ref pointer value : " << &ref << "\n";
		return *this;
	}

	~MyClass()
	{
		std::cout << "MyClass dtor "<< "\n";
		std::cout << "this pointer value : " << this << "\n";
	}

};

int main() 
{
	//what if you just add a copy assignment then 
	//copy ctor is still defaulted but move assignment and move ctor will ne NOT declared


	MyClass mx;

	std::cout << "mx address :  " << &mx << "\n";

	std::cout << "main before mx = 5 " << "\n";

	mx = 5; 

	std::cout << "main after mx = 5 " << "\n";



}