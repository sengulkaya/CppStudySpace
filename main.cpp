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

int Nec::ival = foo();// you see 3 in the console bcs foo is first lookiied in the CLASS scope if not there in the namspace 




int main()
{
    std::cout << "Nec::ival " << Nec::ival << '\n';

}