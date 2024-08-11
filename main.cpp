#include <iostream>
#include <cstdlib>

class MyClass
{
	//Mesela bu sýnýf sadece bazý private memberlara friendlik vermek istiyorsa?
	//Attorney - client idiom
private:
	int mx, my, mz;
	void foo();
	void bar();
	void baz();
};

int main()
{
	
	//A B'yi friend declare ederse ve B de C'yi friend declare ederse bu demek deðildir ki dolaylý olarak A C'yi friend declare etmiþ olsun!
  //
}