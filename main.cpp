#include <iostream>

class Nec
{
public:
    static void foo()
    {
        bar(); //  ERROR you need an object to call bar
    }

    void bar() const
    {
        foo();// 
    }


    

private:
    int mx;
    
};




int main()
{
    

}