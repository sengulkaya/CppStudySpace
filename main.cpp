#include <vector>
#include <iostream>


class MyClass
{
public:
	static int mx; // non-defining declaration
	int my;
	double d1;
};




int main() 
{
	std::cout << "sizeof MyClass " <<  sizeof(MyClass) << "\n";
}