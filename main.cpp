#include <vector>
#include <iostream>
//#include <neco.h>



class MyClass; //forward declaration and it is incomplete type

class Neco;


Neco foo(Neco);
Neco& bar(Neco&);
Neco* baz(Neco*, int);


class Ali;

Ali* foo();
Ali& bar();
void baz(Ali& ref);

class Emre;

extern Emre ge;//letting compiler know that this Emre is defined in another module and this extern makes it known and tells compiler not to spare place for it.

extern Emre ga[];

int main() 
{
	// what can we do with incomplete type? 
	// Function declaration
	//type alias declaration

	typedef Neco* NecoPtr;
	typedef Neco& NecoRef;
	using NecoPtr = Neco*; // daha kolay sezgisel compared to typedef. and useful for generic programming paradign 

	//Pointer ya da referans deðiþkenler tanýmlayabiliriz


	Ali * aliPtr =  nullptr; // no error

	Ali* p = foo();
	Ali& ref = bar();
	baz(ref);



	

}