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

	~MyClass()
	{
		std::cout << "MyClass dtor "<< "\n";
		std::cout << "this pointer value : " << this << "\n";
	}

};

int main() 
{
	//conversion ctor nedir?

	MyClass mx; //default ctor will be called

	std::cout << "adddress of mx before conversion stuff " << &mx << "\n";

	std::cout << "main before mx = 5 " << "\n";

	mx = 5; //it is ok now because this will implicitly calling  MyClass(int) and it will give us temporary object 
	//and then MyClass move assignment operator will be called 

	std::cout << "main after mx = 5 " << "\n";

	//since temporry object will have life extention it is lifetime depends on mx so dtor will be called after std::cout << "main after mx = 5 " << "\n"; line
	

}