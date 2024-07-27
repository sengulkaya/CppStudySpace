#include <iostream>
#include <vector>
#include <memory>
class MyClass
{
public:
	explicit MyClass(int, int);

};

void foo(MyClass)
{
	//
	
}


MyClass bar()
{
	return {45, 78};//valid; making ctor explicit this becomes error

}


int main() 
{
	
	MyClass m = { 12, 67 };
	foo({ 12, 67 }); //valid; making ctor explicit this becomes error

}