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
	// //Tek paraml� ctorlar� aksi y�nde sebep yoksa explicit yapmal�y�z!
	// Baz� specifier lar bildirimde kullan�rsan tan�mda kullanmayacks�n ama baz�lar�n� her iki yerde de kullanmal�s�n!
	//explicit bildirimde varsa tan�mda olmayacak not allowed static function bildirilse de tan�mda satatic olmayacak
	//noexcept hem bildirimde hem de tan�mda oalcak


	
}