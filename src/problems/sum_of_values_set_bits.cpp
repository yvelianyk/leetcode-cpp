#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int res = 0;
        for(int i = 0; i < nums.size();i++) {
            if (getNumberOfSetBits(i) == k) {
                res += nums[i];
            }
        }
        return res;
    }

private:
    int getNumberOfSetBits(int num) {
        int res = 0;
        int pos = 1;
        for (int i = 0;i<32;i++) {
            if ((num & pos) != 0) res++;
            pos = pos << 1;
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> array = {4,3,2,1};
    cout << "result: " << s.sumIndicesWithKSetBits(array, 2);

}