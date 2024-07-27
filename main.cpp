#include <iostream>

class MyClass
{
public:
	MyClass()
	{

	 std::cout << "default ctor" << "\n";
	}

	explicit MyClass(int x) // making this explicit common practice
	{
		std::cout << "MyClass(int x) ctor" << "\n";

	}

	~MyClass()
	{
		std::cout << "DESTRUCTOR" << "\n";

	}


	MyClass(const MyClass& ref) = delete;


};

void foo(MyClass x) 
{
	std::cout << "foo()\n";
}

int main() 
{
	//copy elision ; elision is like elimination
	foo(MyClass{}); 
	// call by value. so move ctor will be called for x. but what if we eliminate move ctor then copy ctor will be called(BOOM copy ctor is NOT called!)
	//c++ 17 �ncesi optimization tamamen kaldirilirsa hata olur like nelow
	// attempting to reference a deleted function
	// //so the lesson is that 
	// 1- Bir fonksiyonun paramteresini s�n�f t�r�nden yaparsan�z ve argument Pr value yani sa� taraf de�eri ile �a��r�rsan�z
	//  bunu c++ 17 �ncesi derleyiciler genel olarak optimization yaparak	�nce temp object olu�turur ama onu copy yapmak yerine
	//do�rudan parametre de�i�keni olarak olu�turuyorlar.
	//C++17 �ncesinde bu durum mecburi de�ildi. copy ctor delete edildi�inde syntax hatas� olu�turuyordu. Ya da optimization yapmamaya zorlarsan�z compileri copy ctoru �a��racakt�
	//peki C++17 sonras� ne oldu peki ? Sen copy ctor delete etmi� etsen bile bu bir hata de�il.
	//C++17 yeni bir tan�m getirdi. �ncesinde temporary object olan Pr value olan MyClass {} nesne stat�s�ndeydi. C++17 ile mandatory copy elision kural� k�l�f�na uydurmak i�in
	//standart art�k PR value olan ifadeler do�rudan s�n�f nesnesi de�l yani MyClass {} do�rudan bir s�n�f nesnesi de�il . Peki endir?
	//S�n�f nesnesi olmas� i�in baz� senaryolar�n ger�ekle�mesi laz�m. 
	//Ne zaman PR value ancak bu kural ile temporary materialization ger�ekle�ti�i zaman ancak mesela MyClass{} ifadesi s�n�f nesnesi olarak kabul g�r�yor. 


}