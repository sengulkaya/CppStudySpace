#include <iostream>

int &&foo() {
}



int main() {

    //decltype operand is in unevaluated context
    int a[10]{};
    int x = 5;

    decltype(a[20]) r = x; //a[20] will noıt be evaluated but it is an l val expression

    ++r;

    std::cout << "x = " << x << '\n'; // x is 6 it compilers

}
