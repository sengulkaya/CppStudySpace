#include <iostream>

class MyClass
{
public:
	MyClass();
	MyClass(int);
	
	

};

void func(MyClass);

int main() 
{
	//user defined conversion >> variadic conversion
	MyClass m;


	m = 4.9073;// legal 


}