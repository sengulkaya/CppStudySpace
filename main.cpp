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
	//Burada en önemli kural explicit ctor function overload resolution aþamalarýna hiç girmiyor zaten. Bu yüzden hata deðil
	MyClass m = 45.99;

}