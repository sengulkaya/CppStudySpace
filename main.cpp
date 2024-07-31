#include <iostream>

class Nec
{
public:
    int x;
    static int y;

private:
   
};

int x = 5;


int Nec::y = x;//ERROR because x is first searched in class scope if not then in namespace scope
//So here x is is found and it is err bcs it does not belong to an object specifically.


int main()
{

}