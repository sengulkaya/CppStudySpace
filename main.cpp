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

	MyClass{};
	//Nerelerde temporary materialization olu�uyor? 
	//1 - Mesela temporary object ile bir nesneye ilk de�er verdi�inizde bu ger�ekle�iyor.
	// 2 - ya da MyClass {} bir reference bind edilirse --> const MyClass & ref = MyClass{};


}