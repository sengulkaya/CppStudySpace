#include <vector>
#include <iostream>
//#include <neco.h>
struct Data
{
	int mx;
	struct Data sData;// incomplete type struct is NOT allowed in struct; any class and struct can not have its own type as its member but it is possible if it is static
};

class Data
{
	int mx;
	static Data sData;// incomplete type struct is NOT allowed in struct; any class and struct can not ahve its own type as its member but it is possible if it is static
};



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