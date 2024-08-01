#include <iostream>

class MyClass
{
public:
    static MyClass createObject();
   
    
};

class Complex
{
public:
    //Complex(double r, double i);//overloading deðil
   // Complex(double a, double d);//overloading deðil so we need a diff kind of ctor to get an object creation so one reason factory function exists for this like beloq
    static Complex create_polar(double a, double d)
    {
        return Complex(a, d, 0);
    }
    static Complex create_cartesian(double r, double i)
    {
        return Complex(r, i, 0);
    }

private:
  
    Complex(double , double ); //cartesian
    Complex(double , double, int ); //polar

};




int main()
{
    auto c1 = Complex::create_cartesian(3.5, 1.2);
    auto c2 = Complex::create_polar(.2352, 4.5767);
    

}