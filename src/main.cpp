
#include <iostream>

template <class T>
void print(T a)
{
    std::cout << a << std::endl;
}

int main()
{
    print(3.5);
    print(30L);
    print('a');
    print("Ahmet");

    return 0;
}