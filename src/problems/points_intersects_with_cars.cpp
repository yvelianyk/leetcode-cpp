#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

// https://leetcode.com/problems/points-that-intersect-with-cars/description/
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<vector<int>> stack;
        sort(nums.begin(), nums.end());
        for (auto& curr: nums) {
            if (stack.size() == 0) {
                stack.push_back(curr);
                continue;
            }
            vector<int> prev = stack.back();
            vector<int> merged;
            if (curr[0] <= prev[1]) {
                stack.pop_back();
                merged.push_back(prev[0]);
                merged.push_back(curr[1] < prev[1] ? prev[1] : curr[1]);
                stack.push_back(merged);
            } else {
                stack.push_back(curr);
            }
        }
        int result = 0;
        for(auto& item: stack) {
            result += item[1] - item[0] + 1;
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<vector<int>> arg = {{3,6}, {1,5}, {4,7}, {8,10}};
    s.numberOfPoints(arg);
}