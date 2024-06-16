#include <iostream>

using namespace std;

// https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/
class Solution {
public:
    int numberOfChild(int n, int k) {
        int count = 0, dir = 1, res = 0;
        while (count < k) {
            count++;
            if (dir == 1) {
                res++;
                dir = res == n - 1 ? -1 : 1;
            } else {
                res--;
                dir = res == 0 ? 1 : -1;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    int res = s.numberOfChild(5, 6);
    cout << res;
};