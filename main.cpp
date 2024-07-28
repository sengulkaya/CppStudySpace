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

	void foo(){}
	void bar(){}
	void baz(){}


};

MyClass func() 
{
	MyClass m1{ 365 };// int ctor (expetation)

	std::cout << "this ref address in func : " << &m1 << "\n";

	//REALITY? 

	m1.foo();
	m1.bar();
	m1.baz();
	

	return m1;
}

int main() 
{
	//NRVO - NAMED return value optimization is NOT mandatory
	//compiler optimization yapsa da yapmasa da caðrýlabilecek copy ctor ya da move ctor olmasýný zorunlu kýlýyor. Her türlü available olmasý alzým bu ctorlarýn.


	MyClass m2 = func();// move ctor (expectation)

	//HERE WE DID NOT SEND ANY ARGUMENT TO THE FUNCTION FUNC BUT ASLINDA ASSEMBLY KODUNA BAKARSAK FONKSIYONA RETURN DEÐERININ AKTARILACAÐI YERIN DE ADRESI GONDERILIYOR BUNA RETURN SLAP (slot?)  DENIYOR

	std::cout << "this ref address of what func returned : " << &m2 << "\n";

	//Expectation MyClass(int) -  move ctor - destructor - destructor 

	//REALITY?  MyClass(int) - destructor  and even the object address of m1 in func and address of what func returned is same


}