#include <iostream>
#include <cstdlib>

//aggragate type
struct Point
{
	//Point(); no ctor in aggragte type
	int x, y, z;
};

int main()
{
	//Friend bildirimleri(Hemen her zaman kendi kodlarýna veriliyor)
	//Sýnýfýn
	//a-) Global fonksiyonlarý (free functions)
	//b-) yardýmcý türler

	Point p = { 1, 2, 3 }; //aggregate initialization

}