#include <iostream>
#include <vector>
#include <memory>
class MyClass
{
public:
	explicit MyClass(int);

};

void foo()
{

}

int main() 
{
	using namespace std;

	unique_ptr<int> p1{ new int };

	unique_ptr<int> p2{ new int };

	unique_ptr<int> p3 = new int; //explicit ctor

}