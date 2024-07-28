#include <vector>
#include <iostream>

std::vector<void *> gvec;

int main() 
{
	using namespace std;

	int i; 


	try
	{

		for (int i = 0; i < 10000000000000; ++i)
		{
			gvec.push_back(operator new (1024 * 1024));
			std::cout << "." << "\n";
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << "exception caught: " << ex.what() << '\n'; 
}

}