#include <iostream>
#include <cstdlib>

class MyClass
{
public:
	MyClass(int x) : MyClass(x, x, x)
	{
		
	}
	MyClass(int x, int y) : MyClass(x, x, 0)
	{
		
	}
	MyClass(int x, int y, int z) : mx(x), my(y), mz(z)
	{
		
	}
	MyClass(const char* p) : MyClass(std::atoi(p))
	{
		
	}

private:
	void common_code_init()
	{

	}

	int mx{}, my{}, mz{};

};

int main()
{
	//delegating ctor (modern c++)

}