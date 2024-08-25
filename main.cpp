#include <iosfwd>//light header this include forward declarations
#include <iostream>

#include "mint.h" //light header this include forward declarations


int main()
{
	Mint m1{1}, m2{2}, m3{3}, m4;

	m4 = m1 * m2 + m3;

//	if (m1 > m2) ;

	for (int i = 0; i < 10; i++)
	{
		//++m2;

	}


	std::cout  << m1 * m2 + m3 << '\n';

	std::cout  << m4 << '\n';

}
