#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class MyClass
{
public:
	MyClass()
	{
		std::cout << "default ctor\n";
		std::cout << "this "<< this << '\n';
		std::cout << "-----------------------------\n";
	}

	~MyClass()
	{
		std::cout << "destructor \n";
		std::cout << "this " << this << '\n';
		std::cout << "-----------------------------\n";
	}

	MyClass(int x)
	{
		std::cout << "MyClass(int) ctor\n";
		std::cout << "this " << this << '\n';
		std::cout << "-----------------------------\n";
	}


private:
	
};

MyClass foo() //return PR value expression
{
	return MyClass{};
}

std::string foo2();

void bar(std::string s)
{
	//s geçerli valid bir state e sahip
}


int main()
{

	using namespace std;

	ifstream ifs{ "how-to-swim-faster.txt" };

	string sline;

	while (getline(ifs, sline))
	{
		cout << sline << "\n";

		(void)getchar();
	}

}