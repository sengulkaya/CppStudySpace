#include <iostream>

class MyClass
{

};

int main()
{
	MyClass a, b, c;
	a = b = c;
}
//This shows which operators are called
/*
#include <iostream>

class MyClass
{
  public:
  // inline constexpr MyClass() noexcept = default;
  // inline constexpr MyClass & operator=(const MyClass &) noexcept = default;
};


int main()
{
  MyClass a;
  MyClass b;
  MyClass c;
  a.operator=(b.operator=(c));
  return 0;
}*/
	