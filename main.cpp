#include <iostream>

class Nec
{
public:
    Nec(int i) : x(i) //ctor initializer list ilk deðer verir halbuki x main çaðrýlmadan once geliyor hayata ve önemlisi ctor initilizer list syntaxý nonstatic veri elemanlarýna ilk deðer verme syntaxýdýr
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