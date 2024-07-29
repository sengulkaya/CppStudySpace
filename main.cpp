#include <iostream>


class Nec;

class Mert;

class Nec
{
public:


	// void is an incomplete type

private:
	Mert mert; // incomplete type is not allowed
};

Mert* foo();

int main()
{
	sizeof(Mert);

}