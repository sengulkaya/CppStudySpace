#include <iostream>
#include <cstdlib>

class MyClass
{
public:
	friend void ff(MyClass);
	friend int foo(int);
	friend int foo_with_myclass_param(MyClass);
	friend void foo();//Bir s�n�f kendi fonksiyonuna friend declaration yapamaz!
	friend void bar(); //Namespace i�erisinde olan bir fonksiyon
	//hidden friend
	friend int bar(MyClass, int x)
	{
		return x * x;
	}
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
	foo(12); //err undefined declaration "friend int foo(int);" onun global namespace i�erisinde g�r�nmesini sa�lam�yor
	MyClass m;
	foo_with_myclass_param(m);//NO ERR ADL ile ilgili
	

	//Friend bildirimleri(Hemen her zaman kendi kodlar�na veriliyor)
	//S�n�f�n
	//a-) Global fonksiyonlar� (free functions)
	//b-) yard�mc� t�rler


	//ADL : argument dependant lookup

	
}