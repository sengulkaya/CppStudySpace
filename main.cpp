#include <iostream>

class Singleton
{
public:
	Singleton(const Singleton&) = delete;
	static Singleton* get_instance()
	{
		if (!mp)
		{
			mp = new Singleton();
		}

		
		return mp;
	}

	void foo();
private:
	inline static Singleton* mp{};
	Singleton();
};




int main()
{    //Fonsiyonalrýn delete edilebilmesi is a new thing. Before thata they were making all the others private like move abd copy ctors
	Singleton::get_instance()->foo();
}