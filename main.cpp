#include <iostream>
#include <vector>

class MyClass
{
public:
	MyClass();
	explicit MyClass(int);
};

int main() 
{
	// explicit ctor
	using namespace std;
	// so by using explicit keyword for ctor we wont let compiler do user defined conversion implicitly
	// so thanks to this 
	MyClass m = 35; /// err it says noo suitable ctor 

	
}