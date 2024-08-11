#include <iostream>

class MyClass
{

public:

	MyClass operator+(const MyClass&) const;

	MyClass operator+(int) const;

	MyClass operator+(double) const;

	MyClass operator+(std::string) const;

	MyClass operator/(const MyClass&) const;

	MyClass operator*(const MyClass&) const;

	bool operator>(const MyClass&) const;
};



int main()
{
	MyClass m1, m2, m3, m4, m5;

	auto b = m1 * m2 + m3 / m4 > m5;

	auto b1 = (m1.operator*(m2).operator+(m3.operator/(m4))).operator>(m5);
	
}
