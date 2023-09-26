#include <iostream>
using namespace std;

// https://leetcode.com/problems/smallest-even-multiple/description/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : n << 1;
    }
};

int main() {
    Solution s;
    cout << s.smallestEvenMultiple(9);
}