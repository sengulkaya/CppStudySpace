#include <iostream>
#include <cstdlib>

class MyClass
{
public:
	friend void ff(MyClass);
private:
	int mx{};
	void foo();
};

void ff(MyClass m)
{
	m.foo();//error 
	MyClass myc;
	myc.mx = 5; //error
}

int main()
{












	//Friend bildirimleri(Hemen her zaman kendi kodlarýna veriliyor)
	//Sýnýfýn
	//a-) Global fonksiyonlarý (free functions)
	//b-) yardýmcý türler


	//ADL : argument dependant lookup

	
}