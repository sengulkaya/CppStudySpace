#include <iostream>

class Nec
{
public:
    static void foo() const //ERR static function has no hidden object param
    {
        Nec mynec;
        mynec.mx = 5;
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