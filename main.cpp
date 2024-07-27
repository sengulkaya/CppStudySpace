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
	//c++ 17 öncesi optimization tamamen kaldirilirsa hata olur like nelow
	// attempting to reference a deleted function
	// //so the lesson is that 
	// 1- Bir fonksiyonun paramteresini sýnýf türünden yaparsanýz ve argument Pr value yani sað taraf deðeri ile çaðýrýrsanýz
	//  bunu c++ 17 öncesi derleyiciler genel olarak optimization yaparak	önce temp object oluþturur ama onu copy yapmak yerine
	//doðrudan parametre deðiþkeni olarak oluþturuyorlar.
	//C++17 öncesinde bu durum mecburi deðildi. copy ctor delete edildiðinde syntax hatasý oluþturuyordu. Ya da optimization yapmamaya zorlarsanýz compileri copy ctoru çaðýracaktý
	//peki C++17 sonrasý ne oldu peki ? Sen copy ctor delete etmiþ etsen bile bu bir hata deðil.
	//C++17 yeni bir taným getirdi. Öncesinde temporary object olan Pr value olan MyClass {} nesne statüsündeydi. C++17 ile mandatory copy elision kuralý kýlýfýna uydurmak için
	//standart artýk PR value olan ifadeler doðrudan sýnýf nesnesi deðl yani MyClass {} doðrudan bir sýnýf nesnesi deðil . Peki endir?
	//Sýnýf nesnesi olmasý için bazý senaryolarýn gerçekleþmesi lazým. 
	//Ne zaman PR value ancak bu kural ile temporary materialization gerçekleþtiði zaman ancak mesela MyClass{} ifadesi sýnýf nesnesi olarak kabul görüyor. 


}