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
	explicit MyClass(int x, int y) // making this explicit common practice
	{ 
		std::cout << "MyClass(int x, int y) ctor x = " << x << "y= " << y << "\n";

	}


	~MyClass()
	{
		std::cout << "dtor" << this << "\n";

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

	void foo()
	{
		std::cout << "MyClass foo" << this << "\n";
	}

	char buf[124]{};


};

void* operator new(std::size_t sz)
{
	std::cout << "senguls operator new is called" << "\n"; 
	 
 void*  vp = malloc(sz);
 if (!vp)
 {
	 throw std::bad_alloc{};
 }
 std::cout << "address of allocated block is" << sizeof(MyClass) << vp << "\n";
 return vp;

}




int main() 
{
	std::cout << "sizeof(MyClass) " << sizeof(MyClass) << "\n";
	MyClass* p = new MyClass;

	std::cout << "this:  "  << p << "\n";

	p->foo();
	
}