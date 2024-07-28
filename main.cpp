#include <iostream>
#include <vector>

class MoveOnly
{
public:
	MoveOnly() = default;
	MoveOnly(const MoveOnly&) = delete;
	MoveOnly & operator=(const MoveOnly&) = delete; //You could just declare move assignment and move ctor to get deleted copy ctor and copy assignment but some chose to write it explicity like this
	MoveOnly(MoveOnly&&);
	MoveOnly& operator=(MoveOnly&&);

};

MoveOnly foo()
{
	MoveOnly x;

	return x;// L value to X value

}


int main() 
{
	MoveOnly x;

	x = foo();

}