#include <iostream>

class MyClass
{
public:
	MyClass() = default;
	MyClass(int);

};

int main()
{
	//conversion ctor nedir?

	MyClass mx;

	mx = 5; //it is ok now because this will implicitly calling  MyClass(int) and it will give us temporary object 
	//and then MyClass move assignment operator will be called 
	

}