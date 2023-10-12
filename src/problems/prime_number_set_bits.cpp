#include <unordered_set>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

        for (int i = left; i <= right; i++) {
            int count = count_set_bits(i);
            if (primes.count(count)) res++;
        }
        return res;
    }

private:
    int count_set_bits(int num) {
        int res = 0;
        while (num) {
            res += num & 1;
            num >>= 1;
        }
        return res;
    }
};

int main() {
    Solution s;
    cout << s.countPrimeSetBits(6, 10);
}