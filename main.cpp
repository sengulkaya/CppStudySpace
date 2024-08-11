#include <iostream>
class MyClass
{
public:


};

MyClass operator*(const MyClass& m1, const MyClass& m2)
{

}

MyClass operator+(const MyClass& m1, const MyClass& m2)
{

}

MyClass operator/(const MyClass& m1, const MyClass& m2)
{

}

bool operator>(const MyClass& m1, const MyClass& m2)
{

}



int main()
{
	MyClass m1, m2, m3, m4, m5;

	auto b = m1 * m2 + m3 / m4 > m5;

	auto b1 = operator>(operator+(operator*(m1, m2), operator/(m3, m4)), m5);
	
}
