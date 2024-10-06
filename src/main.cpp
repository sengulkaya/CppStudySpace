#include <iostream>

int a = 1;

int main() {
    auto f = [](int b) { return a + b; };

    std::cout << f(4);
}

/*Only local variables may be captured by a lambda. a is a global variable with static storage duration and may not be captured.

The body of a lambda-expression may refer to local entities of enclosing block scopes by capturing those entities .

Since a is not captured, a in the lambda expression simply refers to the global variable a.


 */