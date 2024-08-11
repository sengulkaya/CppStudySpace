#include <iostream>

//Some operators functions can only be member functions
// 1- function call operator
//2- subscriptor operator []
//3 - assignment operators
//4 - tür dönüþtürme operators
//5- (->) arrow operators
// they dont take default arguments except one

int main()
{
	std::string name{ "Mehmet" };
	name += "Can";

	for (size_t i{}; i < name.size(); ++i)
	{
		std::cout << name[i] << ' ';
	}
}
	