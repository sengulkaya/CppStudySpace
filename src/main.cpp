#include <initializer_list>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

class MyClass {
public:
   MyClass()
   {
      std::cout << "MyClass::MyClass()" << std::endl;

   }

   MyClass(int)
   {
      std::cout << "MyClass::MyClass(int)" << std::endl;

   }

   MyClass(int, int)
   {
      std::cout << "MyClass::MyClass(int, int)" << std::endl;
   }

   MyClass(std::initializer_list<int> il)
   {
      std::cout << "MyClass::MyClass(std::initializer_list<int>)" << std::endl;
   }

};

int main()
{
   //  {//here no narrowing conversion normally}

   MyClass m1(1);

   MyClass m2{2};

   /*
   MyClass::MyClass(int)
   MyClass::MyClass(std::initializer_list<int>)
   */

   //MyClass m3(3, 4);

   //MyClass m4(5, 6);


}
