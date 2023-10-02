#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/counting-bits/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0;i <= n;i++) {
            res.push_back(getNumberOfSetBits(i));
        }
        return res;
    }
private:
    int getNumberOfSetBits(int num) {
        int res = 0;
        int pos = 1;
        for (int i = 0;i < 32;i++) {
            if ((num & pos) != 0) res++;
            pos = pos << 1;
        }
        return res;
    }
};

int main() {
    Solution s;
    s.countBits(5);
}