//
// Created by SV on 29.09.2024.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minElement(vector<int> &nums) {
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            vector<int> digits = get_digits(nums[i]);
            for (int j = 0; j < digits.size(); j++) {
                sum += digits[j];
            }
            nums[i] = sum;
        }
        int res = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            res = min(res, nums[i]);
        }

        return res;
    }

private:
    vector<int> get_digits(int x) {
        vector<int> result;
        while (x > 0) {
            result.push_back(x % 10);
            x = x / 10;
        }
        return result;
    }
};

int main() {
    vector nums = {10, 12, 13, 14};
    Solution s;
    int res = s.minElement(nums);
    cout << res << endl;
}
