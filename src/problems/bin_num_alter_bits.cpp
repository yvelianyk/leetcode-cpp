#include <iostream>
#include <cmath>

using namespace std;

// https://leetcode.com/problems/binary-number-with-alternating-bits/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pos = (int) log2(n);
        int prev = !!((1 << pos) & n);
        for (int i = pos - 1; i >= 0; i--) {
            int curr = !!((1 << i) & n);
            if (prev == curr) return false;
            prev = curr;
        }
        return true;
    }
};

int main() {
    Solution s;
    cout << "result: " << s.hasAlternatingBits(11);
}