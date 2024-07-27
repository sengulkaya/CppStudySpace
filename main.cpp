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


	MyClass(const MyClass& ref) = delete;


};

void foo(MyClass x) 
{
	std::cout << "foo()\n";
}

int main() 
{
	//copy elision ; elision is like elimination
	foo(MyClass{}); 
	// call by value. so move ctor will be called for x. but what if we eliminate move ctor then copy ctor will be called(BOOM copy ctor is NOT called!)
	//c++ 17 öncesi optimization tamamen kaldirilirsa hata olur like nelow
	// attempting to reference a deleted function	

}