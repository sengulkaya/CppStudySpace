#include <iostream>
#include <vector>

class MyClass
{
public:
	std::string m_str; //100000 character
	std::vector<int> m_vec; // 20000

};

MyClass foo();

int main() 
{
	MyClass m; //

	m = foo(); //here move assignment will be called but what if instead it will be copy assignment called. It will be costly
	
}