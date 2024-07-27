#include <iostream>
#include <vector>

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
	MyClass m1(9); //direct initialization
	MyClass m2{ 35 }; // direkt list initialization
	MyClass m3 = 55; // copy initialization this is not valid for explicit ctor

}