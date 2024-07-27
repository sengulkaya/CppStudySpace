#include <iostream>

class MyClass
{
public:
	MyClass();
	MyClass(bool);
	
	

};

void func(MyClass);

int main() 
{
	//user defined conversion >> variadic conversion
	MyClass m;


	m = false;// legal 


}