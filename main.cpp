#include <iostream>
#include <cstdlib>

class MyClass
{
	//Mesela bu s�n�f sadece baz� private memberlara friendlik vermek istiyorsa?
	//Attorney - client idiom
private:
	int mx, my, mz;
	void foo();
	void bar();
	void baz();
};

int main()
{
	
	//A B'yi friend declare ederse ve B de C'yi friend declare ederse bu demek de�ildir ki dolayl� olarak A C'yi friend declare etmi� olsun!
  //
}