#include <iostream>

class Nec
{
public:
    static void foo() const //ERR static function has no hidden object param
    {
        mx;//ERROR  name lookup ile mx bulunur ama bunu nitelyen bir object yok. O yüzden err
        Nec nec;
        nec.mx = 5; //OK
    }
    

private:
    int mx;
    
};

void bar()
{
   
}


int main()
{

}