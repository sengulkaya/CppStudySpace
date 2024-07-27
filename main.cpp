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
	//s ge�erli valid bir state e sahip
}


int main()
{

	using namespace std;

	string s;

	string str(200'00, 'Z');

	string sx = str; // here it is by copy ctor sx will have a life ama mesela str hayat�n� devam ettirmesine ra�men ben onun kayna��n� �a��rmak istiyorsam;

	string sx_move = std::move(str); // burada art�k str will be an r value gel beni �al diyor str
	//1 burada daha str dtor �a�r�lmam��t�r. 



	s = foo2();

}