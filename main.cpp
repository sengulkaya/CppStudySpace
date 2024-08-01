#include <iostream>

class MyClass
{
public:
    static MyClass createObject();
   
    
};

class DynamicOnly
{
public:
    DynamicOnly(const DynamicOnly&) = delete;
    DynamicOnly& operator=(const DynamicOnly&) = delete;

    DynamicOnly * create_object()
    {
        return new DynamicOnly();
    }
   
private:
    DynamicOnly()
    {

    }

};




int main()
{
    auto c1 = Complex::create_cartesian(3.5, 1.2);
    auto c2 = Complex::create_polar(.2352, 4.5767);
    

}