#include <iostream>
#include <cstdlib>


class Nec
{
private:
	friend class Erg; //legal bcs we add class to friend declaration. Any Erg member function can accesss Nec private memebers
	int mx;
};


class Erg
{
public:
	void foo(Nec nec)
	{
		nec.mx = 20; //legal

	}

	void bar()
	{
		Nec* p = new Nec;
		auto val = p->mx; //legal
	}
};
int main()
{
	
	//Friend bildirimleri(Hemen her zaman kendi kodlarýna veriliyor)
	//Sýnýfýn
	//a-) Global fonksiyonlarý (free functions)
	//b-) yardýmcý türler
	//ADL : argument dependant lookup
	//Bir sýnýf bir baþka sýnýf "friend"lik verebilir.
	//Bu durumda friend bildirimine konu sýnýf incomplete type olabilir!

	
}