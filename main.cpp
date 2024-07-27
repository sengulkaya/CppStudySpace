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
	/*
	* Eðer conversion is done by one of the folllowings sequences , it must be done by compiler implicity
	* 1 - user defined conversion + standard conversion 
	* 2 - standard conversion + user defined conversion 
*/
	MyClass m;
	double dval = 32.5;
	

	m = dval;//  it is ok


}