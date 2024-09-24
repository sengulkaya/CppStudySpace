#include <initializer_list>
#include <string>
#include <vector>

int main()
{
    auto x = {1}; //deduced type std::initializer_list<int>
    auto y{1}; //deduced type int
}
