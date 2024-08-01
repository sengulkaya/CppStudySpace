#include <iostream>

class Myclass
{
public:
	 Myclass()
	{
		 ++lived_object_count;
		 ++live_object_count;
	}

	~Myclass()
	 {
		--live_object_count;
	 }

	static int get_live_count() // static member functions have no sth like having CONST param
	{
		return live_object_count;
	}
	
private:
	inline static int live_object_count{};
	inline static int lived_object_count{};

};




int main()
{   
}