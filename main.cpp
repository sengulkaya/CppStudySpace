#include <iostream>
#include <vector>
#include <algorithm>


class Fighter
{
public:
	Fighter()
	{
		fvec_.push_back(this);
	}
	Fighter(std::string name, int age) : name_(std::move(name)), age_(age)
	{
		fvec_.push_back(this);
	}
	//call by value (string)

	~Fighter()
	{
		//containerda adresini bul
		//std::erase(fvec_, this);  C++23
		if (auto iter = std::find(fvec_.begin(), fvec_.end(), this); iter != fvec_.end()) //linear search
		{
			fvec_.erase(iter);
		}
		else
		{
			std::cerr << "This pointer can not be foun in the container\n";
		}
	}
	Fighter(const Fighter& ref) = delete;
	Fighter& operator=(const Fighter&) = delete;
	void ask_for_help()
	{
		std::cout << "Ben yýlmaz savaþçý " << name_ <<"yetiþin kardeþlerim, baþým belada...\n";
		for (auto p : fvec_) //range base for loop
		{
			if (p != this && p->get_age() > 15)
			{
				std::cout << p->get_name() << ' ';
			}
		}

		std::cout << "yardýma koþun hemen\n";
	}
	std::string get_name() const
	{
		return name_;
	}
	int get_age() const
	{
		return age_;
	}

private:
	std::string name_;
	inline static std::vector<Fighter*> fvec_; // C++17 default initiliaze edilecek, default ctor will be called
	int age_{0};//default member initializer
};





int main()
{
	Fighter f1{"Selami", 50};
	Fighter f2{ "Nuriye", 25 };
	Fighter f3{ "Hakan", 22 };

	
	Fighter* p1{ new Fighter{"Muzaffer", 30} };
	Fighter* p2{ new Fighter{"Sabriye", 10} };

	f3.ask_for_help();

	delete p1;
	delete p2;

	f1.ask_for_help();
}