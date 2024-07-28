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

/*

		{
		std::cout << "copy ctor" << "\n";


	MyClass & operator=(const MyClass& ref)
	{
		std::cout << "copy assign" << "\n";
	}

	MyClass(MyClass&& ref)
	{
		std::cout << "move ctor" << "\n";
	}


	MyClass& operator=(MyClass&& ref)
	{
		std::cout << "move assign" << "\n";
	}

	}*/

	
	


};

MyClass foo(int n) 
{
	//code
	return MyClass{n};
}

int main() 
{
	//RVO

	MyClass m = foo(13);// What will happen before c++17 ? 
	//Fonksiyon return value pr value oldu�u i�in initialize durumunda (MyClass m = foo(13);)  temporary materialization ger�ekle�medi�i s�rece nesne olu�mayacak ki burada olu�uyor.
	// C++17 �ncesi durmunda optimization olmad���nda ve copy ctor delete oldu�unda hata veriyor. Neden peki move ctor �a�r�lacak ama biz copy delete olmas� diyoruz? 
	// ��nk� copy ctor declare edilmi� bu durumda move ctor sen yazmad���n s�rece NOT declared ama gel g�r ki olan copy ctor da fall back ile kullan�lmas� gerekirken deleted halde o y�zde �zellikle �rnek b�yle veriliyor.
	// Burada attempted copy ctor is deleted diye error veriyor.
	//



}