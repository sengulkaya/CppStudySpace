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
	//Friend bildirimleri(Hemen her zaman kendi kodlar�na veriliyor)
	//S�n�f�n
	//a-) Global fonksiyonlar� (free functions)
	//b-) yard�mc� t�rler

	Point p = { 1, 2, 3 }; //aggregate initialization

}