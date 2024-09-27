#include <initializer_list>
#include <iostream>
#include <ostream>
#include <string>

int main() {
    using namespace std;
    string str(20, 'a');

    str.reserve(1'000'000);
    for (int i; i < 1'000'000; ++i) {
        str.push_back('a');

        if ( str.capacity() > capacity ) {
            cout <<  "length: "<< str.length() << " capacity : " << str.capacity()<<  '\n';
            capacity = str.capacity();
           // (void) getchar();
        }
        //capacity 2x enlarges
    }
    cout << str << endl;
}
