// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div = 0;
        int not_div = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) div += i;
            if (i % m != 0) not_div += i;
        }
        return not_div - div;
    }
};
