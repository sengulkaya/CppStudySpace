#include <iostream>
#include <vector>


class Vector
{
public:
	Vector();
	Vector(std::size_t n);
	//

};





int main() 
{
	// now 7th row ctor bu ctor nasýl bir nesneyi hayata getiriyor olabilir? 
	//Guess? 
	using namespace std;

	vector<int> ivec;

	//size_t unsigned int

	int ival = 435678;

	ivec = ival; // from int to unsigned it std conversion and unsigned int to Vector user defined conversion so this is disaster!
	//Fortunately this is invalid but why?

	cout << "ivec.size()" << ivec.size() << "\n";



}