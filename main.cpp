#include <iostream>
#include <vector>
#include <memory>
class MyClass
{
public:
	explicit MyClass(double);
	MyClass(int);

};

void foo()
{

}

int main() 
{
	//Burada en �nemli kural explicit ctor function overload resolution a�amalar�na hi� girmiyor zaten. Bu y�zden hata de�il
	MyClass m = 45.99;

}