#include <iostream>


class Nec
{
public:
	static int x;

	// void is an incomplete type

private:
	
};


int main()
{
	Nec::x = 5;

}