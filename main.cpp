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












	//Friend bildirimleri(Hemen her zaman kendi kodlar�na veriliyor)
	//S�n�f�n
	//a-) Global fonksiyonlar� (free functions)
	//b-) yard�mc� t�rler


	//ADL : argument dependant lookup

	
}