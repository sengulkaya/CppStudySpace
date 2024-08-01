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

}