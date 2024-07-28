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

	return x;// pessimistic move which makes copy elision not available

}


int main() 
{
	MoveOnly x(foo()); // here there is NO copy elision ? but why

}