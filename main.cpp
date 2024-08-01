#include <iostream>

class Singleton
{
public:
	static Singleton& instance()//---------Meyers Signleton
	{
		static Singleton object; // dilin verdiði garantiyle static local variables initializations are thread safe;
		return object;
	}

	void foo();
private:
	Singleton();
};




int main()
{    //Fonsiyonalrýn delete edilebilmesi is a new thing. Before thata they were making all the others private like move abd copy ctors
	
	//---------Meyers Signleton

	//Lazy initialization
	//Nesne ilk kez ihtiyaç duyulduðu zaman yaratýlýyor. 
	//Thread safe
}