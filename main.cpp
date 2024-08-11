#include <iostream>
class MyClass
{
public:
	MyClass operator~() const
	{
		std::cout << "MyClass::operator~()\n";
		std::cout << "this" << this <<  '\n';

		return *this;
	}

};



int main()
{
	MyClass m;

	std::cout << "&m = " << &m << '\n';

	auto x = ~m; //~bitsel deðil and this means auto x = m.opeaator~();
	
}
