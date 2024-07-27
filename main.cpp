#include <iostream>
#include <vector>

class MyClass
{
public:
	MyClass();
	 void foo() noexcept; // static is not allowed
};

void foo()
{

}

int main() 
{
	using namespace std;
	//Follow c++ core guidelines
	// //Tek paramlý ctorlarý aksi yönde sebep yoksa explicit yapmalýyýz!
	// Bazý specifier lar bildirimde kullanýrsan tanýmda kullanmayacksýn ama bazýlarýný her iki yerde de kullanmalýsýn!
	//explicit bildirimde varsa tanýmda olmayacak not allowed static function bildirilse de tanýmda satatic olmayacak
	//noexcept hem bildirimde hem de tanýmda oalcak


	
}