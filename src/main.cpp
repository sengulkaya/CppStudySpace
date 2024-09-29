#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
int main() {
    using namespace std;

    string s{"adanali kahraman pasa"};

    cout << s << endl;
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    cout << s << endl;
}
