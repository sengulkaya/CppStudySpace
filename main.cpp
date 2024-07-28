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
	//Fonksiyon return value pr value olduðu için initialize durumunda (MyClass m = foo(13);)  temporary materialization gerçekleþmediði sürece nesne oluþmayacak ki burada oluþuyor.
	// C++17 öncesi durmunda optimization olmadýðýnda ve copy ctor delete olduðunda hata veriyor. Neden peki move ctor çaðrýlacak ama biz copy delete olmasý diyoruz? 
	// çünkü copy ctor declare edilmiþ bu durumda move ctor sen yazmadýðýn sürece NOT declared ama gel gör ki olan copy ctor da fall back ile kullanýlmasý gerekirken deleted halde o yüzde özellikle örnek böyle veriliyor.
	// Burada attempted copy ctor is deleted diye error veriyor.
	//



}