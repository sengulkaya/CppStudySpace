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
	mnec.mx; //nesne eleman� de�il s�n�f eleman�
}