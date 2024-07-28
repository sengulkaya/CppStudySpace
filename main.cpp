#include <vector>
#include <iostream>




int main() 
{
	

	std::cout << "Kaç tamsayý : ";

	std::size_t n;

	std::cin >> n; 
	 
	int* p = new int[n];// array new

	for (std::size_t i{}; i < n; i++)
	{
		p[i] = i;
	}
	

	for (std::size_t i{}; i < n; i++)
	{
		std::cout << p[i] << " " << '\n';
	}

	delete[] p; //array delete
}