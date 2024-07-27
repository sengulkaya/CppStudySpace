#include <iostream>
#include <vector>
#include <memory>
class MyClass
{
public:
	explicit MyClass();

};

void func(MyClass);

MyClass foo()
{
	return MyClass();
	return MyClass{};
	return {};// this is syntax error
	
}


int main() 
{
	
	func(MyClass()); //call with temp object ok
	func(MyClass{}); 
	func({}); //legal idiom this is syntax error in case of explicit default ctor
	foo(); //valid

}