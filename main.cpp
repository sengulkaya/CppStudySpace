#include <iostream>

class Nec
{
public:
    Nec(int i) : x(i) //ctor initializer list ilk de�er verir halbuki x main �a�r�lmadan once geliyor hayata ve �nemlisi ctor initilizer list syntax� nonstatic veri elemanlar�na ilk de�er verme syntax�d�r
    {

    }

private:
    static int x;
};


int Nec::mx{};
int main()
{
    Nec n1;
    Nec n2;
    Nec n3;



   ++ n1.mx;
   ++n2.mx;
   ++n3.mx;

   n1.func();

   std::cout << "mx" << Nec::mx << '\n';


    return 0;
}