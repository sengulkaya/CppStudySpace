#include <iostream>

class MyClass
{
public:
	MyClass();
	MyClass(bool);
	
	

};

void func(MyClass);

int main() 
{
	//user defined conversions >> variadic conversion
	//user defined conversion sadece conversion ctor ile mi oluyor ? NOO 
	// fonksiyon grubu daha var user defined conversion sa�layan. Bunlar t�r d�n��t�rme operator fonksiyonlar�
	//they are type cast operator functions
	MyClass m;
	int x = 10;
	int* ptr = nullptr;


	m = ptr; // if pointer is not null it is true if not it is false so pointer to bool conversion is implicit so this conversion is okay

	m = &x;//  it is ok


}