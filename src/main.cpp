
template<typename T>
auto pri1(const T &x) -> decltype(std::cout << x) {
    return std::cout << x;
}


int main() {
    pri1(10); // return val is ostream &
}

