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
		std::cout << "copy assignment this : " << this << "\n"; 
		std::cout << "ref pointer value : " << &ref << "\n";
		return *this;
	}


	MyClass& operator=(MyClass&& ref)
	{
		std::cout << "move assignment this : " << this << "\n"; 
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



	MyClass mx;

	std::cout << "mx address :  " << &mx << "\n";

	std::cout << "main before mx = 5 " << "\n";

	mx = 5; 

	std::cout << "main after mx = 5 " << "\n";



}