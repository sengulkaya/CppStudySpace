#include <iostream>

class A
{
public:
	A(int);

};

class B
{
public:
	B();
	B(A); //conversion ctor

};

void func(MyClass);

int main() 
{
	/*
	* Eðer conversion is done by one of the folllowings sequences , it must be done by compiler implicity
	* 1 - user defined conversion + standard conversion 
	* 2 - standard conversion + user defined conversion 
	* 
	* 
	* 
*/

	
	B bx;
	bx = 13; // this can not happen becuse compiler wont do two user defined conversion

	//but user defined conversion & udc will not be done by compiler implicitly


}