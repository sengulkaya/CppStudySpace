#include <iostream>
#include <vector>

class MyClass
{
public:
	std::string m_str;
	std::vector<int> m_vec;

};

MyClass foo();

int main() 
{
	MyClass m; //

	m = foo(); //here move assignment will be called
	
}