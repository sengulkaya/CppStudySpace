#include <iostream>
#include <ostream>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        int sum = 0;
        char previous;
        char current;
        int index = s.length() - 1;
        while (index >= 0) {
            char current = s[index--];
            if (current == 'I') {
                sum += (previous && (previous == 'V' || previous == 'X')) ? -1 : 1;
            } else if (current == 'V') {
                sum += 5;
            } else if (current == 'X') {
                sum +=  (previous && (previous == 'L' || previous == 'C')) ? -10 : 10;
            } else if (current == 'L') {
                sum += 50;
            } else if (current == 'C') {
                sum +=  (previous && (previous == 'D' || previous == 'M')) ? -100 : 100;
            } else if (current == 'D') {
                sum += 500;
            } else if (current == 'M') {
                sum += 1000;
            }
            previous = current;
        }

        return sum;
    }
};


int main() {
    std::string s = "MCDLXXVI";
    Solution solution;
    std::cout << solution.romanToInt(s) << std::endl;
}
