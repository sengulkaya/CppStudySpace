#include <iostream>

class Nec
{
public:
    int x;
    static int mx;

    void foo() const // bu þu demek void foo(const Nec * ) 
    {
        mx = 6; // this is NOT error but it is for nonstatic data members of const object
       // x = 7; ERROR
    }

    void func()
    {
        mx = 10;
        this->mx = 45;
    }
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