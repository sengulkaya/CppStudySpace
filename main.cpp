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
// bu variable is static so foo is first lookied in the class scope but if it were a global one we will not do name lookup in class scope




int main()
{
    std::cout << "Nec::ival " << Nec::ival << '\n';

}