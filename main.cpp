#include <iostream>

class Nec
{
public:
    static double foo()
    {
        return 3.9;
    }

    void bar() const
    {
        foo();
    }

    static int ival;


    

private:
    int mx;
    
};

int foo()
{
    return 2;
}

int Nec::ival = ::foo();//ý am telling here to look foo in the global namespace




int main()
{
    std::cout << "Nec::ival " << Nec::ival << '\n';

}