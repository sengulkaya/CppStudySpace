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


/*
* 
*to see how vector class have overloaded push_back for l and r values
class Vector
{
public:
	push_back(const string &);
	push_back(string &&);

};*/

int main()
{

	using namespace std;

	ifstream ifs{ "how-to-swim-faster.txt" };

	string sline;

	vector<string> svec;


	while (getline(ifs, sline)) //bu halde getline sline 'ý moved from state halinde kullanýyor but sline is still valid bcs vector class leaves it still valid!
	{
		cout << sline << "\n";

		//svec.push_back(sline);

		svec.push_back(std::move(sline));

		(void)getchar();
	}

}