#include <iostream>
#include <cstdlib>


class Nec
{
private:
	friend class Erg; //legal bcs we add class to friend declaration. Any Erg member function can accesss Nec private memebers
	int mx;
};

int main()
{
	
	//Friend bildirimleri(Hemen her zaman kendi kodlar�na veriliyor)
	//S�n�f�n
	//a-) Global fonksiyonlar� (free functions)
	//b-) yard�mc� t�rler
	//ADL : argument dependant lookup
	//Bir s�n�f bir ba�ka s�n�f "friend"lik verebilir.
	//Bu durumda friend bildirimine konu s�n�f incomplete type olabilir!

	
}