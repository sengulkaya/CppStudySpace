#include <iostream>


class Nec
{
public:
	static int mx ;


	
};


int main()
{

	Nec mnec;
	Nec* p{ &mnec };
	p->mx;
	mnec.mx; //nesne elemaný deðil sýnýf elemaný
}