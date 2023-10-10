#include <iostream>

using namespace std;

// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
class Solution {
public:
    int minBitFlips(int start, int goal) {
        return count_set_bits(start ^ goal);
    }

private:
    // could be implemented better using Brian Kernighan's algo
    int count_set_bits(int n) {
        int res = 0;
        int n_to_shift = 1;
        for (int i = 0; i < 32; i++) {
            if (n_to_shift & n) {
                res++;
            }
            n_to_shift = n_to_shift << 1;
        }
        return res;
    }
};

int main() {
   Solution s;
   cout << s.minBitFlips(10, 7);
}