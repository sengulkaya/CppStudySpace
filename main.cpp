#include <iosfwd>//light header this include forward declarations


class Mint {
public:
	//members
	Mint();

	explicit Mint(int);
	friend std::ostream&  operator<<(std::ostream &os, const Mint &m);

	friend std::istream& operator>>(std::istream& is, Mint& m);

};

int main()
{
	using namespace std;

	Mint m;
	cin >> m;

}
