#include <iostream>
#include <cstdint>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i = 0;
        int j = 31;
        while(i < j) {
            int left_bit = (n >> i) & 1;
            int right_bit = (n >> j) & 1;
            if (left_bit != right_bit) {
                n ^= (1 << i);
                n ^= (1 << j);
            }
            i++;
            j--;
        }
        return n;
    }
};

int main() {
    Solution s;
    s.reverseBits(12);
}