#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/
class Solution {
public:
    int sumCounts(vector<int> &nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_set<int> set;
            for (int j = i; j < nums.size(); j++) {
                set.insert(nums[j]);
                res += set.size() * set.size();
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,1};
    cout << s.sumCounts(nums);
}