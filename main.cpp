#include <iostream>
#include <cstdlib>

class MyClass
{
public:
	friend void ff(MyClass);
	friend int foo(int);
	friend int foo_with_myclass_param(MyClass);
	friend void foo();//Bir sýnýf kendi fonksiyonuna friend declaration yapamaz!
	friend void bar(); //Namespace içerisinde olan bir fonksiyon
	//hidden friend
	friend int bar(MyClass, int x)// this is NOT a member function. an exception
	{
		return x * x; //This is an inline friend declared hidden friend function. Namespacete bulunan bir function.
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
//Erg::foo

class Erg
{
public:
	void foo(int);
private:
};

class Nec
{
private:
	friend void Erg::foo(int);//Baþka bir sýnýfýn fonksiyonu friend declared yapýlacaksa sýnýf türü complete type olmalý

};

int main()
{
	foo(12); //err undefined declaration "friend int foo(int);" onun global namespace içerisinde görünmesini saðlamýyor
	MyClass m;
	foo_with_myclass_param(m);//NO ERR ADL ile ilgili
	

	//Friend bildirimleri(Hemen her zaman kendi kodlarýna veriliyor)
	//Sýnýfýn
	//a-) Global fonksiyonlarý (free functions)
	//b-) yardýmcý türler


	//ADL : argument dependant lookup

	
}