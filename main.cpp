#include <iostream>
#include <cstdlib>

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

	string s;

	string str(200'00, 'Z');

	string sx = str; // here it is by copy ctor sx will have a life ama mesela str hayatýný devam ettirmesine raðmen ben onun kaynaðýný çaðýrmak istiyorsam;

	string sx_move = std::move(str); // burada artýk str will be an r value gel beni çal diyor str
	//1 burada daha str dtor çaðrýlmamýþtýr. 



	s = foo2();

}